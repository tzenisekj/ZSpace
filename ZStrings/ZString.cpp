#include "ZString.h"
#include <stdlib.h>

namespace ZSpace {
	ZString::ZString() {
		allocated = 1; 
		size = 0; 
		str = new char[allocated];
		str[0] = '\0'; 
	}

	ZString::ZString(const char* s) {
		size = strlen(s); 
		allocated = size; 
		str = new char[size]; 
		for (unsigned int i = 0; i < size; ++i) {
			str[i] = s[i]; 
		}
	}

	ZString::ZString(std::string& s) { 
		if (s.length() > 0) {
			str = new char[s.length()];
			size = s.length(); 
			allocated = s.length(); 
			for (unsigned int i = 0; i < s.length(); ++i) {
				str[i] = s[i]; 
			}
		}
		else {
			allocated = 1;
			size = 0;
			str = new char[allocated];
			str[0] = '\0';
		}
	}

	ZString::ZString(ZString& s)
	{
		if (s.length() > 0) {
			str = new char[s.length()];
			size = s.length();
			allocated = s.length();
			for (unsigned int i = 0; i < s.length(); ++i) {
				str[i] = s[i];
			}
		}
		else {
			allocated = 1;
			size = 0;
			str = new char[allocated];
			str[0] = '\0';
		}
	}

	ZString::~ZString() {
		delete[] str; 
	}

	char ZString::operator [ ] (size_t i) const
	{
		return str[i];
	}

	void ZString::operator=(const char* s)
	{
		delete[] str; 
		size = strlen(s);
		allocated = size;
		str = new char[size];
		for (unsigned int i = 0; i < size; ++i) {
			str[i] = s[i];
		}
	}

	std::ostream& operator<<(std::ostream& os, const ZString& s)
	{
		for (unsigned int i = 0; i < s.length(); i++) { os << s[i]; }
		return os; 
	}
}
