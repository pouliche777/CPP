#include "type.hpp"


Base * generate(void){
	std::srand(std::time(nullptr));
	int i = (std::rand()) % 3;
	switch(i){
		case 0:
			return  (new C);
		case 1:
			return (new B);
		default:
			 return (new A);
	}     
}
void identify(Base* p){
	if (dynamic_cast<A*>(p))
		 std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		 std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		 std::cout << "C" << std::endl;
	
}
void identify(Base& p){
	if (dynamic_cast<A*>(&p))
		 std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		 std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		 std::cout << "C" << std::endl;
}

int main(){

	Base *base = generate();
	identify(base);
	identify(*base);


}