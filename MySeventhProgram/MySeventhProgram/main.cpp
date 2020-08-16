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

	char array_2d[3][3]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };

	cout << array_2d[1][0] << endl;
	cout << array_2d[2][2] << endl; 

	int array_3d[2][2][2]{ 1, 2, 3, 4, 5, 6, 7, 8 };

	cout << array_3d[0][0][1] << endl;
	cout << array_3d[1][1][1] << endl;

	char e[] = "Emmet";

	cout << e << endl;

	char special[] = "\t\r\n\b\t\?\r\v";

	cout << special << endl;

	cout << "" << endl;

	string food1 = "soup";
	string food2 = "salad";

	food1.swap(food2);

	cout << food1 << endl;
	cout << food2 << endl;

		


	string y; 
	getline(cin, y);
	return 0; 

}