#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main(){

	AAnimal *animals[10];
	AAnimal *copy;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
			animals[i]->getBrain()->setIdea(1, "dindon");
			animals[i]->getBrain()->setIdea(2, "Caramel");
		}
		else{
			animals[i] = new Cat();
			animals[i]->getBrain()->setIdea(1, "poulet");
			animals[i]->getBrain()->setIdea(2, "risotto");
		}
	}
for (int i = 0; i < 10; ++i) {
		std::cout <<"Im a " << animals[i]->getType() <<std::endl;
		std::cout << "Im thinking about " << animals[i]->getBrain()->getIdea(1)
		<< " and " << animals[i]->getBrain()->getIdea(2) <<std::endl;
		std::cout << "_______________________________________" <<std::endl;
}
//deepcopy
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout <<"test de deep copy!"<<std::endl;
std::cout <<"Im a " << animals[5]->getType() <<std::endl;
std::cout << "Im thinking about " << animals[5]->getBrain()->getIdea(1) 
 << " and " << animals[5]->getBrain()->getIdea(2) <<std::endl;
(animals[5]) = (animals[6]);
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout <<"Im a " << animals[5]->getType() <<std::endl;
std::cout << "Im thinking about " << animals[5]->getBrain()->getIdea(1) <<
 " and " << animals[5]->getBrain()->getIdea(2) <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout <<"Im a " << animals[6]->getType() <<std::endl;
std::cout << "Im thinking about " << animals[6]->getBrain()->getIdea(1)
 << " and " << animals[6]->getBrain()->getIdea(2) <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "_______________________________________" <<std::endl;
std::cout << "test avec la variable copy!!" <<std::endl;
copy = animals[0]->clone();
std::cout <<"Im a " << copy->getType() <<std::endl;
std::cout << "Im thinking about " << copy->getBrain()->getIdea(1) 
<< " and " << copy->getBrain()->getIdea(2) <<std::endl;
copy->makeSound();
delete copy;
	 for (int i = 0; i < 10; ++i) {
	 	delete animals[i];
	}
	 return 0;
}