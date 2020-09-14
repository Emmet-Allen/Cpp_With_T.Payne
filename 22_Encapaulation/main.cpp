#include <iostream>
#include <string>

using namespace std;

/* Encapsulation
 
 - Information hiding
 
 - Making members accessible ONLY as is NECESSARY

 - Setup through accessors / mutators, aka 'getters' and 'setters'

 - Useful so if you want to change code within a class, you don't have to directly change values within accessors

 - Saves alot of work, changes can be made witin the program without distrubing the overall functionality of the code

 - Don't have to necesscarily have to have one for each class member variable

 - Can have one or the other
 */


//class Wallet {
//	//int _bills[3]; 
//	int _bills;
//	string _name;
//public:
//	int Get_Bill() const { 
//		return _bills;
//	}
//	void Set_Bill(int v) { //Set bill aka 'Setter' and then 'mutate' amount
//		_bills = v;
//	}
//	const string* Get_Name() const { return &_name; } // Returning Pointer
//	void Set_Name(string v) { _name = v;  }
//};

class Employee {
	int _id; 
	int _pay;
public:
	Employee(int id): _id(id){} //Has id only when constructed
	int Get_ID() const { return _id; } //Then you can only ever get the id
	void Set_Pay(int pay) {
		_pay = pay; 
	}
};

int main() {

	//Wallet w;
	//w.Set_Bill(5);
	//cout << w.Get_Bill() << endl; //Get bill aka 'Getter' and 'access' amount
	//
	//w.Set_Name("Fat");
	//const string* n = w.Get_Name(); //Pointer to string variable
	//cout << *n << endl; 
	//
	////*n = "ham"; //Custom external pointer, cant modify
	//cout << *n << endl;
	//cout << *w.Get_Name() << endl; //Wallet has value of ham outside of class NOT SUPPOSED TO MANIPULATE WITH POINTERS

	//// - When returning values using pointers, ensure to put pointer as 'const' so it can't be modified

	Employee(1235);
	


	string Enter;
	getline(cin, Enter);
	return 0;
}

/* Why Encapsulation is important?

 - Makes Classes easier to use

 - Simplifies your code

 - Prevents misuse of code

 - Easier to alter 

 - Other languages may handle encapsulation better through properties (i.e. C#)

 Cpp Guidelines

 - I.30: Encpasulate (isolate) rule violations:
	Move error prone code to a single place, so your overall code doesn't get too messy 

 - C.9: Minimize exposure of Memebers:
	Minimize uninteded access 


*/