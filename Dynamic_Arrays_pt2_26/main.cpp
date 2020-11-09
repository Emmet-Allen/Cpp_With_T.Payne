#include <iostream>
#include <string>

using namespace std; 

/*
	Dynamic Arrays pt.2

	How To Return Dynamic Arrays?

	- Need to return a POINTER or address of the new entity!

	i.e.
	- int* F(){
		return new int[5]
		}
	*/

////Function Returns Dynamic Array
//int* CountToTen() {
//	int* p = new int[10]; // add'()' to set all values of array to zero
//	for (int i = 0; i <= 10; i++) {
//		p[i - 1] = i;
//	}
//	return p;
//}
//
//int main() {
//
//	int* ten = CountToTen();
//
//	for (int i = 0; i < 10; i++) {
//		cout << ten[i] << endl; 
//	}
//
//	delete[] ten; //make sure to delete memory from Dynamic Array to reduce the chance of MEMORY LEAKS
//
//	string Enter;
//	cin >> Enter; 
//	return 0;
//}

/*
	Multi-Dimensional Dynamic Arrays

	- Created by a pointer to either pointers or an array

	i.e.
	int** p1 = new int* [5]
	int* p2[4];

	*/


int main() {

	int* p1[5]; //Pointer to an Array of Pointers Called off the Stack
	int** p2 = new int* [5]; //Pointer to other Pointers that will be Dynamically Allocated Array of Pointers with size of 5 
	int p3[5][4]; //Array of Arrays
	int ham = 5;
	for (int i = 0; i < 5; i++) {
		p1[i] = &ham; //Set to 5
		p1[i] = new int(i); // Then set to new allocated value i
		p2[i] = new int(i * 5); //Pointer within first item to newly allocated value i * 5
		for (int j = 0; j < 4; j++) {
			p3[i][j] = i + j;
		}
		//p1[i] = 4; //Error: Off stack, must be assigned to int *
		//p2[i] = 4; //Error
		//p3[i] = new int(i * 3); //Error: Dynamic Array of Arrays must be assigned to addresses not actual values  
	}
	cout << *p1[1] << endl;
	cout << *p2[1] << endl;
	cout << *p3[1] << endl;

	int** p4 = new int* [3]; //Master Array points to pointer-array-chain
	p4[0] = new int[4];// each pointer array within "Master Array" are set to hold certain values
	p4[1] = new int[5];
	p4[2] = new int[2];

	//'delete' is a runtime function, not complie time function. 
	delete[] p1; //Error: trying to deallocate memory that is not on the stack
	delete[] p2; //Works: p2 is a Dynamic Array of Array "Master Array" with Dynamic Array size 5
	delete[] p3; //Error: Trying to deallocate memory on a regular array, program will do that for us

	for (int i = 0; i < 3; i++) {
		delete[] p4[i]; //We need to access each item within p4 (Arrays within Arrays), then delete each item
	}
	delete[] p4; // Finally we can release/deallocate memory of "Master Array"


	string Enter;
	cin >> Enter;
	return 0;
}