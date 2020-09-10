#include <iostream>
#include <string>

using namespace std; 

/* Inheritance

 -	place ': [accessor][baseClass]'
between class name and curly braces 

*/

//class MyBase{};
//class MyDerived : public MyBase {}; //If you forget to add 'public' specifier, it will default to 'private' 

//class Base {
//public:
//	int i;
//	void print(){}
//};
//
//class S1 : Base { //There is no specifier so Base defaults to private, fine because it is being used directly by the constructor
//public:
//	S1() {
//		i = 1;
//		print();
//	}
//};
//
//class S2 : S1 { //Because Base isn't 'public', S2 sub-sub class cannot access Base constructor functions through S1 sub class
//public:
//	S2() {
//		i = 3;
//		print(); //error
//	}
//};

//class MyBase { //Class
//	int _i; //private int
//public:
//	MyBase(int i): _i(i){} //Constructor: takes in an in i
//	void p() { cout << _i; } //Function to output i
//};
//
//class MyDerived /*Derived Class */ : public /* Acessor */ MyBase /*Base Class Inheriting Fron */ {
//	float _f; // private float
//public:
//	MyDerived(float f, int i) : /*Public Constructor*/
//		_f(f), MyBase(i) {}
//};
// 
//
//
//int main() {
//
//	MyDerived d(1.0f, 2); //Derived Class Instance with two Arguments
//	d.p(); //Calling function p, from base class function
//	
//	string Enter;
//	getline(cin, Enter);
//	return 0;
//}



/* Constructors Order in Memory 
	- First Constructor is compiled in memory, Then Derived class or Sub-class will be compiled after

	Constructor Destruct Order
	- First Derived class is Destructed, then Constructor is compiled 
		- '~' Is destructor

*/
class MyBase {
public:
	~MyBase() { cout << "Base\n"; }
};

class MyDerived : public MyBase {
public:
	~MyDerived() { cout << "Derived\n"; }
};

int main() {
	{ MyDerived d; } //Any class code placed in curly braces will be DELETED!
	
	string Enter;
	getline(cin, Enter);
	return 0;
}