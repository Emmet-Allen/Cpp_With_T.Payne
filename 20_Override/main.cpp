#include <iostream>
#include <string>

using namespace std;

/* Override

 - Used to write over base class / member function

 - Acts as a safegaurd to prevent accidentally creating a new function 

 - replaces 'virtual' 

 - Will raise a compiler error if not setup correctly

 - Can only be added to functions that are 'virtual' in the base class

 - Place 'override' between () and {}


*/

class MyBase {
public:
	virtual void print() const { cout << 1 << endl; }
};

class MyDerived : public MyBase {
public:
	void print() const override { cout << 2 << endl; }
};
	
class My2ndDerived : public MyDerived {
public:
	void print() const override final { cout << 3 << endl; }
};

/* Override Cont.

 - If 'virutal' or base class function removed = compiler errors

 - 'override' replaces 'virtual' 

 - 'const' comes before override

 - For class heiracrchies, const must be added to all implementation


*/

/* Override Final

 - Add the keyword 'final' after 'override to end virtual function chain

*/

int main() {

	MyBase b;
	b.print();

	MyDerived d;
	d.print();

	My2ndDerived e;
	e.print();


	string Enter;
	getline(cin, Enter);
	return 0; 
}