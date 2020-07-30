#include <iostream>
#include <string>
using namespace std;

int main() {
	/*1) cin would be used to store a users input into a variable, while
	getline() would be used to take in 2 arguments: user input and variable value */

	cout << (2 + 20) - 10 * 60 / 8 % 2 << endl;
	cout << (5 == 5 < 3 > 2 <= 8 >= 12) << endl;
	cout << (true && false || true) << endl;

	string y;
	getline(cin , y);

	return 0;
}