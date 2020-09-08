#include <iostream>
#include <string>

using namespace std; 


/* Destructors

- Handle how class is destroyed

- Designeated like constructor with tilda '~' in front of name

- Take NO PARAMETERS

-	i.e.
		~MyClass() {}

	
	C++ Core Guidelines

- C.30: Define a destructor if a class needs an explicit action at object destruction

- C.31: All resources acquired by a class must be released by the class's destructor

- C.32 - 34...

- C.35: A base class with a virtual function needs a virtual destructor

- C.36 A destructor MAY NOT FAIL (They should never fail in freeing up memory)

- C.37 Mae destructors 'noexcept' (noexcept causes the program to not make any exceptions for the destructor while running)

*/



	class RipTire {
	public:
		RipTire() { //Constructor
			cout << "Fire in the Hole!" << endl;
		}
		~RipTire() noexcept //Destructor
		{
			cout << "SQUIGLY BOOM!!!" << endl; 
		}
	};

	int main() {

		{
			RipTire r; //Any code block that is substantiated will be created and destroyed because of constructor and destructor
		}

	string Enter;
	getline(cin, Enter);
	return 0;
}