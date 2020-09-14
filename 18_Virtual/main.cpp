#include <iostream>
#include <string>

using namespace std; 


/* Virtual

 - Keyword used with inheritance + polymorphism (Makes polymorphism its most powerful!)

 - "If there is a subclass / derived class implementation of this function,
 use that instead. Otherwise use this one."

 - Place before function's return type

	- i.e. 
		virtual void myFunc() {}

*/
//
//class MyBase {
//public:
//	virtual void print() {
//		cout << "inside Base \n";
//	}
//};
//
//class MyDerived : public MyBase {
//public:
//	 /* virtual void print() { //optional overides print function in MyBase
//		cout << "inside Derived\n"; 
//	} */
//};

class MyBase {
public:
	virtual void print() = 0;
};

class MyDerived : public MyBase {
public:
	void print() {
		cout << "inside Derived\n";
	}
};

int main() {

	MyDerived d;
	d.print(); // Outputs 'MyDerived print function

	MyBase& b = d; //Base class reference reassigned to Derived Class d
	b.print(); // Because of the keyword 'virtual' the program calls the LOWEST implementation of the function
	// Which in this instance would be MyDerived print function 
	//
	//MyBase b2;
	//b2.print();
	
	/* Virtual Cont.
	 
	
	- Tells subclass implementation, otherwise, call base class function

	- When 'virtual' is added to subclasses, bottom-most is called

	- If 'virtual' is not added to subclasses it will call the next function up 

	- Recommend: Placing 'virtual' in subclasses/dervied for code clarity to show that it over-rides something from a base class 

	*/

	/* Pure Virtualization/ Pure Virtual Methods
	
	- Force subclasses / derived classes to implement/define a function!

	- Just replace code block with ' =0; ' , this forces inheritance classes to implement that function

	- i.e.
		virtual void printHam () = 0;

	- CANNOT set non-virtual function to '= 0' !

	- Virtual does not work on class vars (More in depth in Abstract Classes)

	*/

	/* CPP Core Guidelines:

	- C.10: Perfer concrete types over class hierarchies

	- C.35: base class with virutal function needs virtual destructor

	- C.82: DON'T call virtual functions in constructor / destructor 
	
	
	*/

	string Enter;
	getline(cin, Enter);
	return 0;
}