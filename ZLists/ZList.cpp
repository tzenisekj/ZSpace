#include "ZList.h"

namespace ZSpace {
	template<typename T>
	ZList<T>::ZList() {
		size = 0; 
		data = new T[2]; 
		sizeLocked = false; 
	}

	template<typename T>
	ZList<T>::~ZList() {
		delete[] data; 
	}

	template<typename T>
	void ZList<T>::setCapacity(size_t& n)
	{
		capacity = n; 
		sizeLocked = true; 
		T* newArr = new T[capacity];

		delete[] data; 
		data = newArr; 
	}


}