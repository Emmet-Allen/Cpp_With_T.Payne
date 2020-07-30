#include <iostream>
#include <string> //Allows us to take any letters, numnbers, or symbols from user
using namespace std; 


int main() {
	/*
	string x; //Stores Variable
	cout << "Please enter an Int: "; 
	
	cin >> x; //Passes in the users input and stores it in x
	/* 'cin' Problems:
	Cannot handle spaces very well
	'Enter' does nothing until value entered, steps us down the window
	Program errors if non-int entered


	cout << "Thank You!" << endl;
	cin >> x;
	*/
	/*
	string y; 
	cout << "Sandwich Type: ";
	getline(cin, y); //getline() is a function that takes in 2 arguments user input and the variable value
	cout << "Creating " << y;
	cout << " Sandwich." << endl;
	cout << "Press enter to exit...";
	getline(cin, y); //stops program from closing out until after we enter something
	*/

	//char x[100];
	//cin >> x; 
	//cout << 111 << endl;
	//cin.getline(x, 100); //using cin, then calling getline can cause getline to be ignored!!!
	//cout << 222 << endl;
	//cin >> x;
	//cout << 333 << endl;
	//cin >> x; 

	//ctrl + k + c = comment selected
	//crtl + k + u = uncomment selected

	/*
	char x, y;
	int max_num_char = 100;
	char stop_at = ' ';

	x = cin.get();
	cin.ignore(max_num_char, stop_at); //cin.ignore() first arugment: limit to ignore, second argument: variable to stop at 
	/* cin.ignore() ignores all inputs until either character limit excceded OR specific character entered 
	y = cin.get();
	cin.ignore(max_num_char, '\n');// '\n' is equivalent to user pressing 'Enter'
	cout << x << y << endl;

	string z;
	getline(cin, z);
	*/

	/*
	char x[100];
	cin >> x; 
	cin.ignore(100, '\n'); //until '\n' is hit, ignore all user inputs
	cout << 111 << endl;
	cin.getline(x, 100); 
	cout << 222 << endl;
	cin >> x;
	cout << 333 << endl;
	cin >> x; 
	*/

	/*
	Operators
	Symbols, punctuation and keywords that perform operations, or manipulate the data in some way.
	
	Examples:
	= assingment operator
	<< insertion operator
	>> extraction operator
	:: scope operator
	sizeof() measures size (in bytes)
	*/

	/*
	cout << 5 + 4 << endl;
	cout << 5 - 4 << endl;
	cout << 5 * 4 << endl;
	cout << 5 / 4.0 << endl; //does not automatically convert ints into floats
	cout << 5 % 4 << endl;

	int x = 5;
	x += 8;
	cout << x << endl;
	*/

	/*
	int wounds = 0;

	wounds++; //Increments wounds by 1 *different timing
	++wounds;//Increments 1 to wounds *different timing
	cout << wounds << endl;
	wounds--;//Decrements woudns by 1
	cout << wounds << endl; 
	*/

	/*
	Logical Operators

	cout << !true << endl; //! is not
	cout << (5 == 4) << endl; // == is equal too
	cout << (5 != 4) << endl; // != is not equal too
	cout << (5 < 4) << endl;  // < is less than
	cout << (5 > 4) << endl;  // > is greater than
	cout << (5 <= 4) << endl; // <= is less than or equal to
	cout << (5 >= 4) << endl; // >= is greater than or equal to
	cout << (true && true) << endl; // && is 'AND'
	cout << (true || false) << endl; // || is  'OR'
	*/

	string y;
	getline(cin, y);

	return 0;
}