
#include "PmergeMe.hpp"
//Non class functions
const int K = 5; // La taille maximale d'un sous-vecteur à trier par insertion

void mergeInsertSortList(std::list<int>& lst, int left, int right) {
    if (right - left <= K) {
        lst.sort();
        return;
    }
    int middle = left + (right - left) / 2;
    mergeInsertSortList(lst, left, middle);
    mergeInsertSortList(lst, middle, right);
    std::list<int> result;
    std::list<int>::iterator it1 = lst.begin();
    advance(it1, left);
    std::list<int>::iterator it2 = lst.begin();
    advance(it2, middle);
    while (it1 != lst.begin() && it2 != lst.end()) {
        if (*prev(it2) < *it1) {
            result.push_front(*it2);
            it2 = lst.erase(prev(it2));
        }
        else {
            result.push_front(*it1);
            it1 = lst.erase(it1);
        }
    }
    result.reverse();
    lst.splice(next(lst.begin(), left), result);
}
void insertionSortVec(std::vector<int>& v, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = v[i];
        int j = i - 1;
 
        while (j >= left && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}
 
// Fusionne deux sous-vecteurs triés
void mergeVec(std::vector<int>& v, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
 
    // Créer des vecteurs temporaires pour stocker les sous-vecteurs gauche et droit
    std::vector<int> L(n1), R(n2);
 
    // Copier les éléments dans les vecteurs temporaires
    for (int i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = v[middle + 1 + j];
 
    // Fusionner les deux sous-vecteurs
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copier les éléments restants de L et R (s'il y en a)
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}
 
// Trie le vecteur donné en utilisant le mergeVec-insertion sort
void mergeInsertionSortVec(std::vector<int>& v, int left, int right) {
    if (left < right) {
        // Trouver le milieu du vecteur
        int middle = left + (right - left) / 2;
        // Trier les deux moitiés
        if (right - left + 1 <= K) {
            insertionSortVec(v, left, right); // Tri par insertion si le vecteur est suffisamment petit
        }
        else {
            mergeInsertionSortVec(v, left, middle);
            mergeInsertionSortVec(v, middle + 1, right);
 
            // Fusionner les deux moitiés triées
            mergeVec(v, left, middle, right);
        }
    }
}

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
  (void)rhs;
  return *this;
}

// Default destructor
PmergeMe::~PmergeMe() {
}

void PmergeMe::setVec(std::string args[], int argc) {
	for (int i=1; i < argc; i++){
		vectInt.push_back(std::stoi(args[i]));
		if(vectInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
	
}
void PmergeMe::setList(std::string args[], int argc) {
	for (int i=1; i < argc; i++){
		listInt.push_back(std::stoi(args[i]));
		if(listInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
}
void PmergeMe::sortList() {
	std::cout << PINK_CL << "Printing the unsorted integers sequence" << DEFAULT_CL << std::endl;
	std::list<int>::iterator it;
	
	for(it = listInt.begin(); it!= listInt.end();it++){
		std::cout << GREEN_CL << *it  << "  " << DEFAULT_CL;
	}
	std::cout << std::endl;
	clock_t start = clock();

	mergeInsertSortList(listInt, 0, listInt.size());
	
	clock_t end = clock();

	std::cout << PINK_CL << "Printing the sorted integers sequence" << DEFAULT_CL << std::endl;
	for(it = listInt.begin(); it!= listInt.end();it++){
		std::cout << GREEN_CL << *it  << "  " << DEFAULT_CL;
	}
	std::cout << std::endl;
	double timeToSort = double(end - start) / CLOCKS_PER_SEC;
	std::cout << PINK_CL << "Time to sort with a list : "  << GREEN_CL <<  timeToSort << " seconds" << DEFAULT_CL << std::endl ;
}

void PmergeMe::sortVec() {
	std::cout << PINK_CL << "Printing the unsorted integers sequence"  << std::endl;
	std::vector<int>::iterator it;
	
	for(it = vectInt.begin(); it!= vectInt.end();it++){
		std::cout << GREEN_CL << *it << "  "  << DEFAULT_CL;
	}
	std::cout << std::endl;


	clock_t start = clock();
	
	mergeInsertionSortVec(vectInt, 0, vectInt.size()-1);
	
	clock_t end = clock();
	std::cout << PINK_CL << "Printing the unsorted integers sequence" << DEFAULT_CL << std::endl;
	for(it = vectInt.begin(); it!= vectInt.end();it++){
		std::cout << GREEN_CL << *it << "  "  << DEFAULT_CL;
	}
	std::cout << std::endl;
	double timeToSort = double(end - start);
	std::cout << PINK_CL << "Time to sort with a vector : "  << GREEN_CL <<  timeToSort << " seconds" << DEFAULT_CL << std::endl ;
	
}
