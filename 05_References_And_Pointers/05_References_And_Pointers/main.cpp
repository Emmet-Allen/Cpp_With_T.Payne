#include <iostream>
#include <string>

using namespace std; 

int main() {
	/*
	References 

	Several parts to making a variable:
	1) Identifer: The name of the variable
	2) Data Type and Size
	3) Data Value: Acutal data being stored in memory
	4) Location: Place in memory where it is being stored 

	When creating a variable it stores the data in a memory address

	Memory Address:
	Where variable is stored in memory
	Random hexidecimal value
	Each address is unique but sequential 

	Think of data as a rectangle with the address being a hoop or ring 
	attached to the left side of the memory
	*/

	/*
	"Address Of" Operator : '&'
	Its used to get an address from variables
	also can be used tlo create a reference variable

	*/

	/*int a = 5;

	cout << a << endl;
	cout << &a << endl;


	cout << "" << endl;

	string b = "Ham Sandwich";

	cout << b << endl;
	cout << &b << endl;*/
	
	/*
	Reference Variable

	A varaible that has the exact same memory address AND data!
	Is NOT a copy!
	Place '&' between data type and variable
	*/

	//int a = 5;
	//int& my_ref = a; //'&' can go anywhere, but good practice is next to data type
	//cout << a << endl;
	//cout << my_ref << endl;
	//cout << "" << endl;
	//cout << &a << endl;
	//cout << &my_ref << endl;

	/*
	Why is "int& my_ref" not the same as "&a"
	
	At compile time, all instances of 'my_ref' are 
	replaced with the address of 'a', subsituting it in
	
	*/

	/*
	References: MUST KNOWS
	
	CANNOT BE NULL
	CANNOT BE CHANGED
	CANNOT BE INITALIZED
	
	*/

	/*
	Pointers:

	Dereference Operator: '*'

	Think of as "Get Value At..."
	Also used to create pointers 
	Can be placed next to a value to get the address of that value
	*/

	//int a = 5;
	//cout << a << endl;
	//cout << "" << endl;
	//cout << *&a << endl; // & = "Go Left to grab address." * = "Go Right to grab data." 
	//// & and * are complimentary

	/*
	Pointers

	Variable with its own block of memory
	Holds only an address to another block of memory
	Hooks into other 'hoops' (Memory Address)
	
	*/

	//int a = 5;
	//int* p1; //Declared Varaible
	//p1 = &a;// Assigned Variable
	//int* p2 = &a; // Declared and Assigned Variable in 1 line

	//cout << &a << endl; //Memory Address
	//cout << p1 << endl; //Memory Address of a stored as Memory Value
	//cout << p2 << endl; //Memory Address of a stored as Memory Value
	//cout << "" << endl;
	//cout << *&a << endl; //Complimentary so will input value of a
	//cout << *p1 << endl; // "Give me the data from this memory address" 

	/*
	Pointers Cont.

	Address cna have multiple pointers connecting to it or none at all
	- Hoop can have zero to infinite hooks (Data Address)
	Pointers can point to one or no address
	- Hook can connect to zero or one hoop (Pointer)
	
	Pointers Can:
	
	Be Null
	Be Switched
	Do not need to be intialized
	
	Can set a pointer equal to another: Yea
	Copies over the memory address of one to another

	*/

	//int a = 5;
	//int* p1;
	//p1 = &a;
	//int* p2 = p1; // Will copy over contents of p1 to p2, so p2 = p1 = &a

	//cout << &a << endl;
	//cout << p1 << endl;
	//cout << p2 << endl;
	//cout << "" << endl;
	//cout << *&a << endl;
	//cout << *p1 << endl; 

	/*
	Pointers to other pointers? Trash.
	Pointers to arrays? Hell ya.
	*/

	//int a[]{ 1,2,3 };
	//int* p1 = &a[0];

	//cout << *p1 << endl; // Get value at this address
	//cout << p1[0] << endl; // Cant treat it as an array. ARRAYS ARE POINTERS!
	//cout << p1[1] << endl;
	//cout << p1[2] << endl;
	//cout << "" << endl;
	//cout << a << endl; // Same value as p1
	//cout << p1 << endl;// Same value as 'a'
	//cout << p1 + 1 << endl; // Grabs the next data address
	//cout << &p1[1] << endl; // Can also grab the next address by referencing that address towards an value of the data array

	//int b = 777;
	//int* p2 = &b; //Deference operator '*' and [0] are the same with pointers
	//cout << p2[0] << endl; //Deference operator '*' and [0] are the same with pointers

	int a1 = 5, //Commas can be used to intialize multiple variables for a certain data type
	a2 = 6,
	a3 = 7;
	int* p1 = &a1,
	* p2 = &a2, // Include dereference operator to pointer and reference operator to variable to access data
	* p3 = &a3;
	int* pa[]{ p1, p2, p3 };

	cout << pa << endl; //Output that array, which is a pointer to that data address
	cout << *pa << endl; //Dereference that array, which itself is a pointer
	cout << **pa << endl; //Derefernce that array, then dereference the address of the first dereference will give you the data value 
	cout << pa[0] << endl;
	cout << *pa[0] << endl; //Remember [0] and * both can be used to derefence a poniter to access either its address or in this case its data value !!Not Recomended!!
	cout << pa[0][0] << endl;

	cout << " " << endl;

	cout << pa << endl; // Original Data Address of Array 
	cout << &pa[1] << endl; // Reference the Data Address of the First Item 
	cout << pa + 1 << endl; // Reference the Data Address of the First Item
	cout << &pa[2] << endl; // Reference the Data Address of the Second Item
	cout << pa + 2 << endl; // Reference the Data Address of the Second Item

	/*
	Array Of Pointers

	Arrays are just Pointers
	Pointers must be initalized before array
	* works the same as [0]
	+/- values to pointer give neighboring memory addresses

	*/

	/*
	Final Pointers Thought:

	Array of pointers = much more memory efficent to move around, 
	as a pseudo copy of data 
	
	Think about list of Doubles:
	Doubles take up alot of memory, 
	Instead of moving and copying them to manipulate them
	REARANGE AN ARRAY OF POINTERS to reference them, so that you don't have to move them around in memory, just need to access their data via pointers
	Very Memory Efficent
	*/

	string y;
	getline(cin, y);
	return 0;
}