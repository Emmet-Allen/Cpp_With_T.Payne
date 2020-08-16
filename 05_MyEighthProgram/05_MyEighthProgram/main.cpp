#include <iostream>
#include <string>

using namespace std;

int main() {

	int a = 5;
	string b = "Sup";
	bool truthy = true;
	double w = 63.455678990098767;
	float g = 56.3;

	int* pa = &a;
	string* pb = &b;
	bool* ptruthy = &truthy;
	double* pw = &w;
	float* pg = &g;


	// Use Reference Operator '&' to reference data address

	cout << &a << endl; 
	cout << &b << endl;
	cout << &truthy << endl;
	cout << &w << endl;
	cout << &g << endl;

	cout << " " << endl;

	cout << *pa << endl;
	cout << *pb << endl;
	cout << *ptruthy << endl;
	cout << *pw << endl;
	cout << *pg << endl;
	
	cout << " " << endl;
	
	cout << pa<< endl;
	cout << pb << endl;
	cout << ptruthy << endl;
	cout << pw << endl;
	cout << pg << endl;


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

	cout << " " << endl;

	char j = 'j';
	char* pj = &j;

	cout << (void *)&j << endl; // Use (void *) to prevent output of address until at null character
	// Immediately outputs memory address

	cout << " " << endl;

	int array1[] = { 0 };

	cout << array1[0] << endl;
	cout << *array1  << endl;

	cout << " " << endl;

	string items[6] = {"sup", "yo", "what'shappening", "nah", "yeah"};
	string* pItems0 = &items[0],
	* pItems1 = &items[1],
	* pItems2 = &items[2],
	* pItems3 = &items[3],
	* pItems4 = &items[4];

	cout << &items[0] << endl;
	cout << &items[1] << endl;
	cout << &items[2] << endl;
	cout << &items[3] << endl;
	cout << &items[4] << endl;
	cout << &items[5] << endl;

	cout << pItems0[0] << endl;
	cout << pItems1[1] << endl;
	cout << pItems2[2] << endl;
    cout << pItems3[3] << endl;
	cout << pItems4[4] << endl;
	

	cout << " " << endl;

	int arrayItems[] = { 1, 2, 3, 4, 5 };
	
	cout << *arrayItems << endl;
	cout << *arrayItems + 1 << endl;
	cout << *arrayItems + 2 << endl;
	cout << *arrayItems + 3 << endl;
	cout << *arrayItems + 4 << endl;

	
	


	string y;
	getline(cin, y);
	return 0;
}