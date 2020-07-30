#include <iostream>
#include <string>

using namespace std;

int main() {

	int arrayMinMax[] = { INT_MIN, INT_MAX };
	cout << arrayMinMax[1] << endl;
	cout << arrayMinMax[2] << endl;

	cout << " " << endl; 

	double arrayDouble[] = { 2.3, 12.4, 15.6, 18.7, 23.4 };
	cout << arrayDouble[0] << endl; 
	cout << arrayDouble[1] << endl;
	cout << arrayDouble[2] << endl;
	cout << arrayDouble[3] << endl;
	cout << arrayDouble[4] << endl;

	cout << " " << endl; 

	int smallArray[] = { 1 };
	cout << smallArray[0] << endl; 

	cout << " " << endl; 

	char array_2d[3][3];
	array_2d[0][0] = 'a';
	array_2d[0][1] = 'b';
	array_2d[0][2] = 'c';
	array_2d[0][3] = 'd';
	array_2d[1][0] = 'e';
	array_2d[1][1] = 'f';
	array_2d[1][2] = 'g';
	array_2d[1][3] = 'h';
	array_2d[2][1] = 'i';

	cout << array_2d[2][1] << endl;
	cout << array_2d[0][3] << endl; 


	string y; 
	getline(cin, y);
	return 0; 

}