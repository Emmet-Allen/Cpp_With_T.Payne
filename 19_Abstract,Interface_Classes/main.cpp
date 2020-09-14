#include <iostream>
#include <string>

using namespace std; 

/*	Abstract Class

 - Class which cannot be instantiated

 - Created when you make a 'pure virtual functions'!

 - It acts as though its constructor is private or protected

 - Used in last tutorial
 
 - Derived classes must implement, or they too will be abstract 

*/

/* Interface Class

 - Abstract class with NO member variables and only pure virtual functions

 - CPP:

	- I.25: Prefer abstract classes as interface classes to class heirarchies


*/


//class /*MyAbstractClass*/ AlsoInterface {
//public:
//	virtual void print() = 0; //Pure virtual function
//};
//
//class MyDerived : public AlsoInterface {
//public:
//	virtual void print() {
//		cout << "I <3 Ham";
//	}
//};


/* Virtual Class

 - If a class will be inherited multiple times, add 'virtual' keyword in front to prevent
 multiple instantiation

*/


class Animal {
public:
	Animal() {
		cout << "making Animal\n";
	}
};

//---------------------------------------------------------
class BipedAnimal : virtual public Animal {
public:
	BipedAnimal() {
		cout << "making BipedAnimal\n";
	}
};

class TenticalAnimal : virtual public Animal //virtual causes the lowest level function to be performed, thus not needing to output the Animal Base Class
{
public:
	TenticalAnimal() {
		cout << "making TenticalAnimal\n";
	}
};

//---------------------------------------------------------

class Cthulhu : public BipedAnimal, 
	public TenticalAnimal{
public: 
	Cthulhu() {
		cout << "making Cthulhu\n";
	}
};


int main() {

	//AlsoInterface a; //Can't compile because of Base Class uses a pure virtual function
	//MyDerived d;

	Cthulhu c;

	/*
	Will Output:

	making Animal
	making BipedAnimal
	making TenticalAnimal
	making Cthulhu
	*/

	string Enter;
	getline(cin, Enter);
	return 0;

}