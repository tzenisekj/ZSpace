#ifndef ZLIST_H
#define ZLIST_H

namespace ZSpace {
	template <typename T>
	class ZList {
		public: 
			ZList(); 
			~ZList(); 

			size_t length() const { return Tsize; }
			size_t size() const { return allocated; }
			size_t capacity() const { return Tcapacity; }
			bool isSizeLocked() const { return sizeLocked; }

			void setCapacity(size_t& n); 

		protected: 
			T* data; 
			size_t Tsize;
			size_t allocated; 
			size_t Tcapacity;
			bool sizeLocked; 
	};
}
#endif