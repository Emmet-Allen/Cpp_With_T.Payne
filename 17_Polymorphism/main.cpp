#include <iostream>
#include <string>

using namespace std; 

/*Polymorphism

- When a single variable, reference or pointer connects to an instance of inheritance

- MOST EVERYTHING MUST BE EXPLICT

- Regular instances perform as expected when calling appropiate functions

- Pointers and References, aren't as clear, they are called off of 'function type' instead of function

*/

class Base {
public:
	void Print() {
		cout << "inside Base\n" << endl;
	}
};

class Derived : public Base {
public:
	void Print() {
		cout << "inside Derived\n" << endl;
	}
};

int main() {

	Base b; 
	Derived d;
	b.Print(); //Base is being called 
	d.Print();//Derived is being called

	Base& br = d; //Reference being created based on the Base class
	Derived& dr = d; //Referrence being created based on the Derived class
	br.Print(); //Still calls Base Class print function
	dr.Print(); //Still calls Derived Class print function

	Base* bp = new Derived(); //Pointer of Base to new instance of Derived
	Derived* dp = new Derived(); //Pointer of Derived to new instance of Derived
	bp->Print();//Still calls Base Class print function, even though its pointing to Derived
	dp->Print();//Still calls Derived Class print function

	auto* ap = new Derived(); //'auto' pointer to new instance of Derived
	ap->Print(); //Prints Dervied function, due to pointer of Derived

	string Enter;
	getline(cin, Enter);
	return 0;
}