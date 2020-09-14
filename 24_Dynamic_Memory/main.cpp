#include <iostream>
#include <string>

using namespace std; 

/* Dynamic Memory

 - Most memory we've been working with has been from the 'Stack'

 - Stack Memory: Where local variables are sotred in memory, and is managed automatically created and deleted

 - Heap Memory: You create it, and you Delete it, there during the whole duration of our program regardless of where it is created

 - Dynamic memory is create from 'heap' memory, which we MUST MANAGE

 - Dyanmic memory is created using 'new' operator and returns an address

  CPP Core Guidelines

  - F.42: Return a T* (a pointer) to indicate POSITION ONLY

  - F.43 NEVER (directly or indirectly) 'return' a 'pointer' or 'reference' to a LOCAL OBJECT

*/


/* Delete

 - Use to release memory back to heap!

 - place 'delete' before pointer!

 - delete's only the data, NOT POINTER 

*/

int* WorstFunctionEver() {
	return new int(2); //BAD: Created in Heap Memory. Will continue to exsist even after function ends
}

int* Create8() {
	int i = 8;
	return &i; //BAD: Will not have a value when code block ends
}

void Set7(int* p) {
	*p = 7; // ok but not the best
}

int main() {


	//int* p = new int(1); //Simplest form of Dynamic Memory. Have a pointer that stores the address of the newly created value
	//cout << *p << endl;
	//p = new int(2); //pointer is now pointing to another dynamic memory allocation i.e. new int(2);
	//cout << *p << endl;

	/* MEMORY LEAK

	int* p = new int(1);
	p = new int(2);

	- The code above creates a memory leak, causing program to run slower / more resources to be unnecsscarily used

	- Memory Leak: Data is ALLOCATED to memory BUT is NEVER DELETED / REMOVED

*/
	
	//int* p = new int(1);
	//cout << *p << endl;
	//delete p;

	//p = new int(2);
	//cout << *p << endl;
	//delete p;

	/* Dangling Pointers 

	- Acessing deleted pointer raises Runtime Error

	- This is called a dangling pointer

	- Results in data corruption and crashes

	i.e. 
	int* p = new int(1)
	delete p;
	cout << *p << endl; //ERROR pointer is deleted, can't be accessed, Dangling Pointer: Accessing Invalid Memory
	
	*/

	//int* p = Create8(); // DANGLING POINTER! Pointer was pointing to an address that was released
	int *p = new int(3); //FIXES EVERYTHING!!!
	cout << p << endl; //Points to memory address
	cout << *p << endl;//Output Garbage value, trying to access a value deleted from memory
	Set7(p);
	cout << p << endl;	//Breaks output. See below
	cout << *p << endl; //Out Garbage value, value that was accessed before has been released, and can no longer be set properly BAD!  

	string Enter;
	getline(cin, Enter);
	return 0;
}