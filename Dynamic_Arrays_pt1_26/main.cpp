#include <iostream>
#include <string>

using namespace std;

/*Dynamic Arrays

- Array that is created at RUNTIME!

- Rarely used by pros

- Created with a pointer and []

- Size cannot be changed i.e.
	double* p = new int[size]

- Use 'delete[]' to release memory created by dynamic array
	*/


void dynamicArray() {

	int a[]{ 1,2,3 };
	int b[4];
	cout << b[0] << endl; //Garbage memory, nothing assigned to b[0]

	int* p1 = new int[5]; // add()...0
	int* p2 = new int[6]; //Error NO SIZE ALLOCATED

	p1[0] = 4;
	cout << p1[0] << endl; //Outputs '4'
	cout << p2[1] << endl; //Garbage Value Output

	delete[] p1; // SUPER IMPORTANT for deletion of dynamic array: Releases MEMORY
	delete[] p2;

}


void userInputs() {

	int userInput;
	cout << "Enter a number: ";
	cin >> userInput;

	//const int constUserInput = userInput;
	//int arr[userInput]{}; //Error the size in a regular array MUST BE DETERMINED AT COMPILE-TIME, NOT RUN-TIME

	int* p = new int[userInput]; //Dynamic memory in the form of an array can be used to DETERMIN ARRAY SIZE AT RUN-TIME
	for (int i = 0; i < userInput; i++) {
		p[i] = 4;
	}
}


int main() {

	//dynamicArray();
	userInputs();

	cout << "\nEnding" << endl;
	string Enter;
	cin >> Enter; // was 'getline(cin, Enter)
	return 0;
}