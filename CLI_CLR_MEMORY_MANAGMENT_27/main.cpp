#include <iostream>
#include <string>

using namespace std; 

/*
	CLI / CLR

	- CLI = Common Language Infrastructure
	- Built into Visual Studio (Microsoft's .NET framework)
	
	-CLR = Common Language Runtime
	- Used for C#, C++ and other languages in VS

	- May Cause "C4199 two-phase name lookup ERROR" if so, include
	' /Zc:twoPhase- ' in properties -> command line

*/

/*
	KeyWords for CLI/CLR Memory Management

	- 'ref' = added before our class to designate for management by CLI/CLR
	
	- '^' = handle to object operator, replaces * for pointers, designated 
			so that it is excusively managed by .NET garbage collector 
	
	- 'gcnew' = replace 'new' when allocating memory, no parenthesis ()


*/


/*
	Pointer Arithmatic

	-incrememnt and decrement operations don't work with '^' handle operators
	- you will need both * and ^ for your programs
	
	*/

/* Finalizer

	- Final cleanup by CLI can be overridden by using !myClass() to designate
	'Finalizer' 
*/

ref class R {
public: 
	R() { cout << "Constructing Ham \n"; }
	~R() { cout << "Destructing Ham \n"; }

protected:
	!R() { cout << "FINAL Ham \n"; } //FINALIZER: OVERRIDES IMPROPERLY MANAGED MEMORY
};

void HamSandwich() {
	R^ p = gcnew R; //memory for R not deallocated, causing Finalizer to appear before end of program runtime
	delete p; //Allocates memory properly, doesnt call Finalizer and includes both constructor and destructor
}

int main() {

	//int arr[]{ 1,2,4 };
	//int* p = arr; // '^' does not work
	//for (int i = 0; i < 3; i++) {
	//	cout << *p++ << endl; 
	//}




	HamSandwich(); 
	string Enter;
	getline(cin, Enter);
	return 0; 
}