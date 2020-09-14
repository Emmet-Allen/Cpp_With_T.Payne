#include <iostream>
#include <string>

using namespace std; 

/* Protected

 - Last access specifier used for class members (functions and vars)

 - Acts like a combination of private AND public

 - Outside of class heriarchy, 'protected' acts like 'private'

 - Inside class & heirarchy, 'protected' acts like 'public' 

 CPP Core Guidelines

 -C.35: base class destructor should be 'public' AND 'virutal', OR 'protected' and 'Non-virtual' 

 -C.133: AVOID PROTECTED DATA. Leads to complexity and errors (Virtual Inheritance VERY MESSY)!

*/

class MyBase {
public: 
	void pub(){}
protected:
	void prot() {}
private:
	void priv(){}
 };

class MyDerived : public MyBase {
public:
	MyDerived() {
		pub();  //OK
		prot(); //OK Can access protected in an inherited class
		priv();	//Error: inaccessible
	}
};

class My2ndDerived : public MyDerived {
public:
		My2ndDerived () {
		pub();
		prot(); //OK Can access protected in an inherited subclass
		priv(); //Error: inaccessible
	}
};

int main() {

	My2ndDerived d;
	d.pub();
	d.prot(); //Error: inaccessible outside the base class / sub class heirarchies
	d.priv(); //Error: inaccessible 


	string Enter;
	getline(cin, Enter);
	return 0; 
}