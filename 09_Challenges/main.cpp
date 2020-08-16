#include <iostream>
#include <string>

using namespace std; 

// Create a function times_Ten which accepts a parameter of int
int times_Ten(int j) {

// And returns the product of it times ten
	return j * 10;
}

//Create a print function that takes string ham with default as "ham"
string print(string ham = "ham") {
	return ham;
}

//Create a mult_Array function that takes in 3 parameters: pointer to an array, the size of the array, a double multiplier 
void mult_Array(double* arr, int size, int multiplier = 2) {
	for (int i = 0; i < size; i++)
		arr[i] *= multiplier;

}

void combine_Arrays(double* arr1, double* arr2, int size) {
	for (int i = 0; i < size; i++) {
		arr1[i] + arr2[i], (arr2[i] - arr2[i]);
		
	}
}


int main() {
	
	int x = 12;
	times_Ten(x);
	cout << times_Ten(x) << endl;

	cout << "" << endl;

	string poop = "poop";
	cout << print(poop) << endl;

	cout << print() << endl;

	cout << "" << endl;

	double test_multi[]{ 1,2,3,4.5,10 };
	mult_Array(test_multi, 5, 10);
		for (int i = 0; i < 5; i++)
			cout << test_multi[i] << endl;

	cout << "" << endl;
	

	double test_combine1[]{ 1.1, 2.2, 3.3 };
	double test_combine2[]{ 4.4, 5.5, 6.6 };
	
	for (int j = 0; j < 5; j++);



	string Enter;
	getline(cin, Enter);
	return 0;
}