#include <iostream>
#include <string>

/*
Classes

- Packages together data and functions together!

- Instances referred to as: 'objects', 'identities', or 'valid identities'

- Functions within classes also called 'member functions', 'behaviors', or 'methods'

- Variables can be called: 'member variables', 'characteristics', 'attributes' or 'data' (So Many Names!)

*/

/*
Class: Basics

- Names of classes should start capitalized(ex. 'class My_Class')

- End class declaration / definitions with a semicolon ';'

- Classes can be created ANYWHERE, but must be called WITHIN SCOPE

- Call them 'member



*/

/*
Access Specifiers

- Use to say what IS and IS NOT accessible outside of class!

- Keywords placed before chunks of code: 'Public', 'Private', 'Protected'
	- 'Private' = Data NOT ACESSIBLE except from within class (default)
	- 'Public' = Data OPENLY ACCESSIBLE
	- 'Protected' = ???, future tutorial 

*/

//int main() {
//	class Ham{ //'Private' Class (default)
//		int x;
//	};  //create a variable with type class, and curly braces '{}' with semicolon after the closing brace
//	
//	
//	Ham h;
//	// std::cout << h.x = 3; //error: No Access to member variable
//	return 0;
//}

/*
Class Functions

- Use '.' to access members of a class

- Called the 'dot seperator'

- DO NOT need to add 'self' in parameters

- Can be DEFINED in 'class' OR DECLARED in 'class', then defined later 

- Keep member variables 'Private'

- Most member functions 'Public'

*/



//	class Ham {
//	private:	//Cannot be accessed outside of 'Class'
//		int y;
//	public:		//Can be accessed outside of 'Class'
//		int x;
//		int z; 
//
//		void print() { //Class Function
//			std::cout << "ham" << '\n';
//		}
//
//
//	};
//
//	
//
//int main() {
//	Ham h; //Initalize Ham Class to h
//	h.x = 3; //Call Ham Class member variable 'int x' with h.x (dot accessor/dot seperator)
//	h.z = 4;
//	h.print(); //Call Ham Class member function 'print' with h.print() (dot accessor/dot seperator)
//	std::cout << h.x << '\n';
//	std::cout << h.z << '\n';
//	return 0;

//}

//class Ham {
//
//public:
//	void print(); //Defined function and function type in Class 
//};
//
//int main() {
//	Ham h;
//	h.print();
//	return 0;
//}
//
//void Ham::print() { //Declared function out of Class by Calling Class Ham and print variable. MUST HAVE SAME TYPE!
//	std::cout << "ham";
//}

/*
Constructors

- Designated by creating a function with NO NAME OF CLASS and NO RETURN TYPE

*/

class Ham {
public:
	int x;
	Ham(){} //Constructor Function
	Ham(int y) { x = y; } //Can Have Multiple Instances of Constructors (OVERLOADING)
	Ham(int y): x(y){} // Can alternatively initallize or set member variables within
	// Right after parameters of constructor, add a colon ':' declare the variable we want to set, and in parenthesis declare what parameter you want to set with it
};

/*
Class Pointers

- 'Member Access Operator' allows you to get/set class members from a pointer
	- Noted by '->' hypon and greater than sign (or "arrow"), instead of '.'
	- '.' is only used for regular variables
*/

int main() {
	Ham h;
	Ham* p = &h;
	(*p).x = 5; //avoid
	p->x = 4; //USE!! 'MEMBER ACCESS OPERATOR'
}



