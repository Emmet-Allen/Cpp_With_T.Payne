//#include <iostream>
//#include <string>
//
//using namespace std;

/*
Previous Lesson Update:

- Array parameters can be declared with [] 
 - e.g. void add_one(int arr[], int size){}

 - Clearer to user that they are passing in an array

- When args are copied into function, we are passing by value

- When args are pointers & references into parameters, we are passing by reference 

*/


/*
Function Decleration / Prototypes:

- Allows us to define the function somewhere else in program

- The Declerations are the INTERFACES and the Definitions are the IMPLEMENTATIONS

*/

//void print_ham(); // function prototype/decleration : going to define this somewhere else in the program
//
//int main () {
//	
//	print_ham();
//
//	
//	string enter;
//	getline(cin, enter);
//	return 0;
//}
//
//void print_ham() { //defining the function here
//	std::cout << "ham" << std::endl;
//}

/*
Headers:

- Store many functinon prototypes/declarations in a header file 

- has '.h' file extension

- Can then define these functions in a seperate cpp file

- Header must be connected to the file 
*/

#include <iostream>
#include "print_Ham.h" //header we are calling to use in our program 
//#include test.h //Is a discoverable header file

int main() {
	namespace food = ham::sandwich; //Create an alias namespace of 'food' which contains both 'ham' and 'sandwich' namespaces by calling both 'ham::sandwich;'
	food::print_Ham(); //Calling ham namespace 'ham::' 
	//p(); //Can't be used because the function doesn't have an actual definition
	return 0;
}

/*
//Add/Remove Files:
//
//- Solutions Explorer > Right Click > Add > Add Existing File
//- OR drag and drop files in
//
//To Remove: Right Click > Remove
//
//*/

/*
 '#' = include:

- Tells program which header files to use

- Angular braces <> surround presupplied files/libraries

- Double Quotes "" used for custom files

- Full directory paths can be included but using 'Include Additional Directories' easier (Tut #8)

- No need to include .cpp files :)

- File names should be clear and consistent 

*/

/*
How it all works:

- When your program builds the main.cpp file and header.h file are compiled to create 
a main.0 file

- Other cpp files are compiled individually to .0 files, and those are linked with libaries
to create your main.exe

*/
