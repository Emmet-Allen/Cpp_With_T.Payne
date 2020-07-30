#include <iostream>
#include <string>

using namespace std;

int main() {

	int a = 5;
	string b = "Sup";
	bool truthy = true;
	double w = 63.455678990098767;
	float g = 56.3;

	// Use Reference Operator '&' to reference data address

	cout << &a << endl; 
	cout << &b << endl;
	cout << &truthy << endl;
	cout << &w << endl;
	cout << &g << endl;

	cout << "" << endl;

	float f = 69.69,
		f1 = 420.69,
		f2 = 31.337;

	//Use derefence operator on pointer (pf) and reference operator on pointee (f) to access data value 
	float* pf = &f,
		* pf1 = &f1,
		* pf2 = &f2;
	float* pfa[]{ pf, pf1, pf2 };

	cout << pfa[0] << endl; //Derefence first index of array to get data address
	cout << pfa[0][0] << endl; //Derefence first index of array to get data address then derefence the data address to get the data value
	cout << pfa + 1 << endl; //Reference the next data address within the array
	cout << pfa[1][0] << endl; 
	cout << pfa + 2 << endl;
	cout << pfa[2][0] << endl; 


	string y;
	getline(cin, y);
	return 0;
}