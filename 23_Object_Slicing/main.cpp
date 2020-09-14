#include <iostream>
#include <string>

using namespace std;

/* Object Slicing

 - When you assign a derived class to an instance of the base class
 -i.e.

  MyBase b = someDerivedInstance; 

  Cpp Core Guidelines

  - C.67: a base class should suppress copying and provide a virtual clone instead if
  if copying is desired (If your going to be object slicing, instead try to create a copy and prevent the base class
  from ever being copied itself)

*/

//class Base {
//public:
//	int data = 5;
//	virtual void Print() {
//		cout << "Base" << data << endl;
//	}
//};
//
//class Derived : public Base {
//public:
//	int data = 7;
//	void Print() override {
//		cout << "Derived" << data << endl;
//	}
//};

//class Base {
//public:
//	virtual void Print() {
//		cout << "Base\n";
//	}
//};
//
//class Derived : public Base {
//public:
//	void Print() override {
//		cout << "Derived\n";
//	}
//};
//
//void Printer(Base b) { //Takes in Base Class 
//	b.Print(); //Runs function of Base Class
//}

class Base {
public:
	//suppress class from being copied
	virtual void Print() { cout << "Base\n"; }
	virtual Base* Clone() { return new Base(); }
};

class Derived : public Base {
public:
	void Print() override {cout << "Derived\n";}
	Base* Clone() override { return new Derived(); }
};

int main() {

	//Derived d;
	//d.Print();
	//d.data = 11;
	//d.Print();

	//Base b = d;//Assigns Base b to Derived d
	//b.Print(); //Outputs Base 5 because b.Print is still calling on base class function, Object Slicing

	//Derived d;
	//Printer(d); //Outputs Base due to Object Slicing

	Derived d;

	Base* b1 = d.Clone();
	b1->Print(); //Output "Derived" because of virtual call from Base Class function
	Base b2 = d;
	b2.Print(); //Output "Base" because of call of the instanced of the Base Class function 

	string Enter;
	getline(cin, Enter);
	return 0;


}