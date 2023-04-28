
#include "PmergeMe.hpp"

const int TRESHOLD_INSERT = 15; // La taille maximale d'un sous-vecteur à trier par insertion

PmergeMe::PmergeMe(std::string args[], int argc) {
	setVec(args, argc);
	setList(args, argc);
}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
	return;
}

// Copy assignment overload
PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	if(this != &rhs){
		vectInt.clear();
		vectInt = rhs.vectInt;
		listInt.clear();
		listInt = rhs.listInt;
		timeToManageVec = rhs.timeToManageVec;
		timeToManageList = rhs.timeToManageList;
	}
  return *this;
}

// destructor
PmergeMe::~PmergeMe() {
	vectInt.clear();
	listInt.clear();
}


//   CLASS FONCTIONS

void PmergeMe::setVec(const std::string args[], const int argc) {
	clock_t start = clock();
	for (int i=1; i < argc; i++){
		vectInt.push_back(std::stoi(args[i]));
		if(vectInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
	clock_t end = clock();
	timeToManageVec = double(end - start) / CLOCKS_PER_SEC;
}
void PmergeMe::setList(const std::string args[], const int argc) {
	clock_t start = clock();
	for (int i=1; i < argc; i++){
		listInt.push_back(std::stoi(args[i]));
		if(listInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
	clock_t end = clock();
	timeToManageList = double(end - start) / CLOCKS_PER_SEC;
}
  // SORTING
void mergeInsertSortList(std::list<int>& lst) {

    if (lst.size() <= TRESHOLD_INSERT) {
		std::list<int>::iterator insertion;
    for (std::list<int>::iterator it = std::next(lst.begin()); it != lst.end(); ++it) {
        insertion = std::upper_bound(lst.begin(), it, *it); // trouve l'endroit ou devra être inséré l'élément;
        std::rotate(insertion, it, std::next(it)); // opère une rotation entre les 2 éléments
    }
    return;

    }
    int middle = distance(lst.begin(), lst.end()) / 2;
    std::list<int> left(lst.begin(), next(lst.begin(), middle));
    std::list<int> right(next(lst.begin(), middle), lst.end());
   	mergeInsertSortList(left);
    mergeInsertSortList(right);
    lst.clear(); //on efface la liste, on va la remplir a l'aide des listes  gauche et droite.
    while (!left.empty() && !right.empty()) { //Ici on compare les elements de la liste gauche et droite (les deux premiers). On enleve la plus petite et on la met a la fin de la liste trie.
        if (left.front() < right.front()) {
            lst.push_back(left.front()); 
            left.pop_front();
        } else {
            lst.push_back(right.front());
            right.pop_front();
        }
    }
    lst.splice(lst.end(), left); // ici on met simplement les valeurs restantes a la fin de la liste trie.
    lst.splice(lst.end(), right);
}

void insertionSortVec(std::vector<int>& v, int left, int right) {
    for (int i = left + 1; i <= right; i++) { // a la base j est toujours 1 de moins que i  et on store le contenu de v[i] dans une varaible tempo.
        int key = v[i];
        int j = i - 1;
 
        while (j >= left && v[j] > key) { //ici on remonte vers le debut de la liste trier pour inserer notre element au bon endroit, mais en  faisant on d/cale le contenu du vecteur  vers la droite a chaque fois.
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key; // on sort de la boucle lorsquon a trouve la bonne position, et on remplace par le contenu de notre
    }
}
 
void mergeVec(std::vector<int>& v, int left, int middle, int right) {
    int sizeVecOne = middle - left + 1;
    int sizeVecTwo = right - middle;
 
    std::vector<int> vecOne(sizeVecOne), vecTwo(sizeVecTwo);  // Créer des vecteurs temporaires pour stocker les sous-vecteurs gauche et droit
    for (int i = 0; i < sizeVecOne; i++) // Copier les éléments dans les vecteurs temporaires
        vecOne[i] = v[left + i];
    for (int j = 0; j < sizeVecTwo; j++)
        vecTwo[j] = v[middle + 1 + j];
    int i = 0, j = 0, k = left; // Fusionner les deux sous-vecteurs
    while (i < sizeVecOne && j < sizeVecTwo) {
        if (vecOne[i] <= vecTwo[j]) {
            v[k] = vecOne[i];
            i++;
        }
        else {
            v[k] = vecTwo[j];
            j++;
        }
        k++;
    }
    while (i < sizeVecOne) {// Copier les éléments restants de L et R (s'il y en a)
        v[k] = vecOne[i];
        i++;
        k++;
    }
    while (j < sizeVecTwo) {
        v[k] = vecTwo[j];
        j++;
        k++;
    }
}

void mergeInsertionSortVec(std::vector<int>& v, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
       
        if (right - left + 1 <= TRESHOLD_INSERT) {
            insertionSortVec(v, left, right); 
        }
        else {
            mergeInsertionSortVec(v, left, middle);
            mergeInsertionSortVec(v, middle + 1, right);
            mergeVec(v, left, middle, right);
        }
    }
}

void PmergeMe::sortList() {
	//std::cout << PINK_CL << "Printing the unsorted integers sequence" << DEFAULT_CL;
	std::list<int>::iterator it;
	// for(it = listInt.begin(); it!= listInt.end();it++){
	// 	std::cout << GREEN_CL << *it  << "  " << DEFAULT_CL;
	// }
	//std::cout << std::endl;
	clock_t start = clock();
	mergeInsertSortList(listInt);
	clock_t end = clock();

	// std::cout << PINK_CL << "Printing the SORTED (list) integers sequence :  " << DEFAULT_CL ;
	// for(it = listInt.begin(); it!= listInt.end();it++){
	// 	std::cout << GREEN_CL << *it  << "  " << DEFAULT_CL;
	// }
	// std::cout << std::endl;
	double timeToSort = double(end - start) / CLOCKS_PER_SEC + timeToManageList; 
	std::cout << PINK_CL << "Time to sort with a list containing " << listInt.size() << " elements : "  << GREEN_CL <<  timeToSort << " seconds" << DEFAULT_CL << std::endl ;
}

void PmergeMe::sortVec() {
	std::cout << PINK_CL << "Printing the UNSORTED integers sequence :  " ;
	std::vector<int>::iterator it;
	
	for(it = vectInt.begin(); it!= vectInt.end();it++){
		std::cout << GREEN_CL << *it << " "  << DEFAULT_CL;
	}
	std::cout << std::endl;
	clock_t start = clock();
	mergeInsertionSortVec(vectInt, 0, vectInt.size()-1);
	clock_t end = clock();
	std::cout << PINK_CL << "Printing the SORTED integers sequence:  " << DEFAULT_CL;
	for(it = vectInt.begin(); it!= vectInt.end();it++){
		std::cout <<  GREEN_CL << *it << " "  << DEFAULT_CL;
	}
	std::cout << std::endl;
	double timeToSort = double(end - start) / CLOCKS_PER_SEC +timeToManageVec;
	std::cout << PINK_CL << "Time to sort with a vector containing " << vectInt.size() << " elements : " << GREEN_CL <<  timeToSort  << " seconds" << DEFAULT_CL << std::endl ;
}
