#include <iostream>

struct Data{
	std::string chicken;
	int chickenNb;
};


uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){

	Data *data = new Data;
	uintptr_t test;
	data->chicken = "poulet top tier";
	data->chickenNb = 42;

	std::cout << data << std::endl;;
	test =serialize(data);
	std::cout << test << std::endl;
	test++;
	std::cout << test << std::endl;
	std::cout << deserialize(test)->chicken << std::endl;
	std::cout << deserialize(test)->chickenNb << std::endl;
	//comportements étranges lorsque on modifie la valeur de tests, c'est pour cette raison que cette type de conversion est à éviter!
	//std::cout << deserialize(  )  << std::endl;
	
    std::cout << deserialize(serialize(data)) << std::endl;
	std::cout << deserialize(serialize(data))->chicken << std::endl;
	std::cout << deserialize(serialize(data))->chickenNb << std::endl;

    delete data;

}