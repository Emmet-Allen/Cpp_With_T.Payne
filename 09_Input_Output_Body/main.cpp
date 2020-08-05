/*
Functions:

Cpp Guidelines F.2:
Perform a specific action or change the computer's state


*/

#include <iostream>
#include <string>
using namespace std; // Bad Practice

//void print_Ham() {
//	std::cout << "ham\n";
//}
//
//int main() {
//	print_Ham();
//
//	string Enter;
//	getline(cin, Enter);
//}

/*
Parts of Functions:
 
 void = return data type "Need to define function output before writing out function"
 print_Ham = function name
 () = enclose parameters
 {} = enclose main code block "Body of Function"
 print_Ham() = function call


*/

/*
Function Name:

- A well name function won't need comments to explain it

- If you company has a "STANDARD NAMING PRACTICE" always use that before following Core Guidelines

- Have a consistent naming style to naming conventions

C++ Core Guidelines:
	-NL.1: Don't say in comments what can be clearly stated in code
	-NL.10: Avoid CamelCase
	-NL.8: Use a consisten naming style

*/

/*
Input & Output:

- Input: Parameters and Arguments passed into the function
- Parameteres: Stuff passed into a function when DEFINING a function
- Arguments: Stuff passed into a function when CALLING a function


- Output: Changes made to data, references/pointers, OR returned from function

Parameter / Argument Types:

- void (or none)
- char, int, string, auto, etc...
- arrays
- references / pointers 
- templates, item collectinos, classes 
- 'cin' and 'cout'

*/

//	------------Input Examples-------------------

//void print_Words(string a) {
//	cout << a << endl;
//}// CREATES COPY OF STRING / ORIGINAL VARIABLE!
//
//
//void add_One(int* i) { //first parameter sets a pointer to an int
//	(*i)++; //increment value at *i "dereference data then increment"
//	*i++; //next location in memory
//	//(*i)++; //BAD! Alters unknown value in memory RUNTIME ERROR!
//}
//
//void add_Two(int& j) {
//	j += 2;//Changes ORIGINAL VALUE
//}
//
//void increment_Array(double* arr, int size = 5) 
////First Parameter: Pass in array type "double" through pointer of array
////Second Parameter: Pass in value of type "int" to determine size of array with default value of 5
////To set defaults to parameters just assign a default value to the parameter (size is parameter with assigned '=' default of 5)
//{
//	for (int i = 0; i < size; i++) //loop through the array of a certain size
//		arr[i] += 2.2; //increment each item of the array 
//}
//
//
//
//
//int main() {
//	print_Words("Ham Sandwich!");
//	
//	cout << "" << endl;
//
//	int x = 5;
//	add_One(&x); //argument will dereference &x because of called parameter "int* i" giving only value of x (reference and derefrence pointers cancel out)
//	cout << x << endl;
//
//	cout << "" << endl;
//
//	int y = 3; 
//	// int* p = &y; // Can't be used in function because function uses "int& j" to reference value of argument 
//	add_Two(y);
//	cout << y << endl;
//
//	cout << "" << endl;
//
//	double super_array[]{ 1, 2, 3, 4.5, 77.7, 34.8 }; //Declare array
//	increment_Array(super_array, 6); //Pass in arguements of array and size
//	for (int i = 0; i < 6; i++) //Loop thorugh size of array
//		cout << super_array[i] << endl; //output each value of array plus 2.2 ( or whatever incrament set by function)
//	
//	cout << "" << endl;
//	
//	string Enter;
//	getline(cin, Enter);
//	return 0;
//}

// ------------ Output Examples --------------

int return_one() { return 1; } //Literally return '1'... yeah

int* AVOID_THIS() //DONT EVER DO THIS EVER
{
	int a = 2; //How then???
	return &a; //COVERED LATER.
} // 'a' destroyed!! Garbage value

int* AVOID_THIS_TOO() {
	int* b = new int[5]; //'new' creates new allocated memory
	return b; //BAD! SEE I.11 in C++ Guidelines
	
} // Could result in memory leak

int& AVOID_THIS_ALSO() {
	int c = 4;
	return c;
} 
// c destroyed!! Should be garbage value

int main() {
	int* x, * y, z;
	char c[] = "Ham Sandwich";
	z = 15;

	x = AVOID_THIS();
	cout << *x << endl;
	
	y = AVOID_THIS_TOO();
	cout << *y << endl;

	//z = AVOID_THIS_ALSO;
	cout << z << endl;

	

	string Enter;
	getline(cin, Enter);
	return 0;
}

/*
More C++ Core Guidelines

- NL.18: C++ Style declarator layout, address of operators left next to type
	-i.e. T& myBlah, T* myBlah NOT T &myBlah

- I.4 Make Parameters strongly typed

- NL.25 Don't use void as an argument type 
	-i.e. void pass(void* data); BE EXPLICIT AND STRONGLY TYPED

- I.11 Never transfer ownership by raw pointer

- I.23 Keep number of args low FOR CLARITY

- I.24 Never place unrelated same type args next to each other AVOID CONFUSION

- F.3 Keep functions short + simple:
	- Less than 10 lines, usally 1-5
	- Should be able to fit on screen
	- Identify chunks of code that repeat
	- Break up further if necessary
	
	*/


























