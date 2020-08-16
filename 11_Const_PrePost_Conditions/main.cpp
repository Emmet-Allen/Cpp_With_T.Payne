#include <iostream>
#include <string>
// #include <boost/timer.hpp> //.hpp is the file name for header-C++ file
#include <gsl/gsl> //When including gsl go to .../gsl/include/ and use this header to include
// #include <cassert> // Libary to use "assert" function


/*
	Const

 - A keyword used before a variable name to label as unchanging or CONSTANT

*/



using namespace std;

//void add_Ham_Ref(string& s) {
//	s += "ham";
//	cout << s; //compiles fine, no const, can be manipulated
//}

//void add_Ham_Copy(const string s) {
//	s += "ham"; //Error: Cannot Change with const, cannot manipulate in anyway
//}

//void add_Ham_Ptr(const string* s) {
//	*s += "ham"; //Error: Cannot Change with const, cannot manipulate in anyway
//}

	/*
	Inline

	- Keyword to be placed before short function's data type

	- Used to increase the execution time of the program

	- Tells the compiler to substitute the function's body anywhere function
	is called into code

	- If function is too long, keyword is ignored

	- Saves overhead of function calling and returning
	but requires arecompiling everytime code changed and increases code size

	- 'inline' is placed before the data type

	*/

//inline string add_Ham_Inline(string s) {
//	return s + "Ham";
//}
//
//string add_Ham_Reg(string s) {
//	return s + "Ham";
//}

/*
	Pre/Post Conditions

	- Using GSL lib from Tutorial #8

	- Precondition = 'Expects(args)' *When you go to a party you are 'Expect'ed to dress nice*
	- Postcondition = 'Ensures(args)' *When you leave the party you 'Ensure' you have your keys*
	- Both function the same, but are used for program clarity

	- Stops program when args is true:
		- better than 'assert()'!

	-Cpp Core Guidelines Interface Section:
	I.6, I.7, I.8 Recommend the use of 'ensures' & 'expects'


	*/

//void square_Root(double x) {
//	Expects(x >= 0); //expect that anything passed into square root function will be greater or equal to 0
//}
//
//void area(int w, int h) {
//	int a = w * h;
//	assert(a >= 0);
//	//Ensures(w * h >= 0); //ensures that the area within itsself is positive
//}

/*
Recursion: Calling a function within itself

*/

long long int factorial(long long int q) //Factorial: 5! multiplying each number from n downward
{
	Expects(q > 0); //exect that i is greater than 0, if its negative number or 0, then it'll break
	if (q <= 0)  // if i is less than or equal to 1 
		return 1;
		return factorial(q - 1) * q; // if it isn't then call function 'factorial' and perform (i - 1) * i
	}

int main() {

	//const int i = 5; //Put const before variable name or variable constant identifier/type
	//int j = 8;
	//i = 4; //Error: Cannot Change Const Value once set
	//int arr[i]; //Can assign const variables as array lengths
	//int arr2[j]; //Error: Cannot assign j as array length because variable is not Const

	////To create an array with a Non-Const variable size
	////Create a dynamic array
	//int* arr3 = new int[j]; //Allocates memory of int j to determine size of array dynamically

	//const int* a; // value is constant and unchanging once set
	//int const* b; // value is constant and unchanging once set

	//int* const c = new int(4); // Pointing (*) to a memory address constant. 
	//// The address to that point will not change, but the value inside address could change

	//void my_Function() const; // Dictates that the variables within the class will not change
	////Everything within the class will be constant
	//
	//int y = 12;
	//const int x(y); // Const variables can be made by non-const variables
	////Created by including const within a data type with a new variable name, and passing in a variable name with similar variable type 
	////Now const int x has a const value of 12

		/*
	Const + Functions

	- When creating functions, it may be unclear what parameters will be altered through the function

	- 'const' solves this by explicitly stating that the variable/parameter will be UNCHANGING

	- C++ Core Guidelines:
		
		- F.16: If datatype is simple, state const directly to the data.
		e.g. const char 'or' const int 
		If datatype is complex, use a const reference. 
		e.g. void ham (const string& s)

		- F.17: In/Out parameters should NOT be const
	*/

	/*
	Constexpr = Const Expression 

	- Like const but specifies unchanging var for COMPILE TIME ONLY!! (Not Pointers)
	
	- Run time is when program executes:
		- const should always be used here
			- e.g. void f (const int i){}

	- Compile time is when the program builds the executable
		- constexpr may be used here
			- e.g. constexpr int i = 6; 

	- Few times you want it to be a constexpr

	- Not necessarily needed but has its cases
	*/


	//string sandwich = "sandwich";
	//add_Ham_Ref(sandwich);
	//
	//boost::timer t;
	//string a = "Testing";
	//cout << t.elapsed() << endl; //Output start time
	//for (int i = 0; i < 100000; i++) { // Loop to print out Ham Inline
	//	//add_Ham_Reg(a);
	//	add_Ham_Inline(a);
	//}

	//cout << t.elapsed() << endl;
	//for (int i = 0; i < 100000; i++) { // Loop to print out Ham Reg
	//	//add_Ham_Inline(a);
	//	add_Ham_Reg(a);
	//}
	//cout << t.elapsed() << endl; //Output end time

	//cout << " " << endl; 
	
	// square_Root(-2); 'Breaks' Program, expect activates a boolean check, when false program breaks.
    // area(-1, 1); 'Breaks' Program, ensures activates a boolean check, when false program breaks

	// area(-1, 1); With assert it doesn't give as nice of a debug solution as ensures/expects
	
	cout << factorial(2) << endl;
	
	
  string Enter;
  getline(cin, Enter);
  return 0;
}