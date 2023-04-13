
#ifndef ARRAY_HPP_
#define ARRAY_HPP_

// Class declaration
template<typename T>
class Array {
 public:
 T *array;
 Array() : array(NULL), sizeA(0) { return; }

 Array(unsigned int n) : array(new T[n]()), sizeA(n) { 
	return; }
  Array(const Array<T> &other) : array(new T[other.size()]), sizeA(other.sizeA){
	for(unsigned int i =0; i < other.sizeA; i++)
		this->array[i] = other.array[i];
  }

  Array<T> &operator=(const Array<T> &rhs){
	if(this !=rhs){
		delete [] this->array;
		this->array = new T[rhs.sizeA];
		for(unsigned int i = 0; rhs < i; i++)
			this->array[i] = rhs.array[i];
	}
	return *this;
}

  ~Array(){
	delete []array;
  }

	unsigned int size()const {
		return (this->sizeA);
	}
	T	&operator[](unsigned int index) {
	if (index >= this->sizeA) {
		throw std::out_of_range("out of range");}
	return (array[index]);}
 private:
 
 unsigned int sizeA;
  
};

#endif // ARRAY_HPP_
