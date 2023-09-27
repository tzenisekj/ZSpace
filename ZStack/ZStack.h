#ifndef ZSTACK_H
#define ZSTACK_H

namespace ZSpace {
	template <typename T>
	class ZStack {
	public:
		void pop(); 
		void push(T value); 
		void clear(); 
		T getValue(); 
		bool empty() return isEmpty; 


	protected:
		T* data; 
		size_t current; 
		size_t stackSize; 
		bool isEmpty; 

	};
}
#endif