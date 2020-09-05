#include <iostream>
#include <string>

using namespace std;

int main() {

	if (1 > 2)
		cout << "false" << endl;
	if (2 == 3)
		cout << "false" << endl;
	if (2 < 3)
		cout << "true" << endl;

	cout << " " << endl; 

	if (1337 < 420)
		cout << "(1337 > 420)" << endl;
	else if (31337 < 0)
		cout << "(31337 < 0)" << endl;
	else if (68 == 68)
		cout << "(68 == 68)" << endl; 

	cout << " " << endl;

	 6 % 2 == 0 ? cout << "true" << endl : cout << "false" << endl;
	 
	 cout << " " << endl;

	 int sparta = 300 > 200 ? 300 : 200;
	 cout << sparta << endl; 

	 cout << " " << endl;

	 int odd = 3 % 2;
	 int even = 4 % 2;

	 if (odd == 0) {
		 cout << "Sunday" << endl;
		 cout << "Monday" << endl;
		 cout << "Tuesday" << endl;
	 }

	 else if (even == 0) {
		 cout << "Happy Days" << endl;
		 cout << "Fun Days" << endl;
		 cout << "Pay Day" << endl;
	 }

	 string j = 2 < 1 ? "yes" : "no";
		 cout << j << endl;


		 int i = 8;
		 int k = 12;
		 k > i ? cout << k << endl : cout << i << endl;

		 switch ('a') {
		 case 'a' != 'b':
			 cout << "a is not b" << endl;
			 break;
		 case 'a' == 'b':
			 cout << "a is b" << endl;
			 break;
		 case 'a':
			 cout << "this is a" << endl;
			 break;
		 default:
			 cout << "neither a or b" << endl;
			 break;
		 }	


	string z;
	getline(cin, z);
	return 0;
}