#ifndef ZSTRING_H
#define ZSTRING_H

#include <stdlib.h>
#include <string>
#include <ostream>

namespace ZSpace {
	class ZString {
		public: 
			// Constructors and deconstructors 
			ZString(); 
			ZString(const char* s); 
			ZString(std::string& s);
			ZString(ZString& s); 
			~ZString(); 

			// Constant returns 
			size_t length() const { return size; }
			char operator [ ] (size_t i) const;  

			// operator functions
			void operator =(const char* s); 

			// friend functions and operators 
			friend std::ostream& operator << (std::ostream& os, const ZString& s); 

			// string functions 
			
			
		protected:
			char* str; 
			size_t size; 
			size_t allocated;  
	};
}
#endif