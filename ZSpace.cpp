// ZSpace.cpp : Defines the entry point for the application.
//

#include "ZSpace.h"

using namespace std;

int main()
{
	string a = "Testing String"; 
	ZSpace::ZString s = a;
	ZSpace::ZString d("Testing String 2");
	ZSpace::ZString t = s; 
	cout << "STD::String Length:  " << a.length() << endl; 
	cout << "ZString Length:      " << s.length() << endl; 
	cout << "ZString2 Length:     " << d.length() << endl; 
	cout << "ZString Copy Length: " << t.length() << endl; 
	cout << endl; 
	cout << "STD::String: " << a << endl; 
	cout << "ZString:     " << s << endl; 
	cout << "ZString2:    " << d << endl; 
	cout << "ZStringCopy: " << t << endl; 
	
	return 0;
}
