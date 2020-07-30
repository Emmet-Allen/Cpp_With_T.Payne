#include <iostream>
#include <string>

using namespace std;

int main() {

	/*
	If Statements:

	- Parenthesis must always enclose condition
	- Non-zero values are true
	- Relational operators are same: <, >, <=, >=, == ,!=
	- Logic operators work the same: && for 'and' || for 'or'

	*/

	//if (1) cout << "ham ";
	//if (-1) cout << "sandwich "; // Can activate code to be outputed right next to if statement
	//if ('a') cout << "with ";
	//
	//if (5 > 4)
	//	cout << "lettuce,"; // Or right below it
	//
	//if (5 >= 4){ // Curly Braces '{}' surround multiple lines to output after condition
	//cout << "tomatoes,";
	//cout << "tomatoes,";
	//cout << "tomatoes,";
	//} // Indent everything for clarity

	//// For statments that are a single line, Cpp is adding {}. Make sure to have the output be global variables or they will be destroyed
	//
	//if (3 != 3)
	//	cout << "pickles";
	//
	//if (3 == 3)
	//	cout << "on wheat ";

	//if (3 && 3)
	//	cout << "with ";
	//
	//if (0 || -1)
	//	cout << "orange juice";

	//if (9)
	//	;

	/*if (true)
		cout << "ham..." << endl;
	if (1) {
		cout << " is so delicious";
		cout << "and nutricious";
		cout << ".";
		int x = 5; 
	}

	cout << x; 
	!!Will throw Error because x is out of scope!!
	*/

	//if (4 > 5)
	//	cout << "You'll never see this.";
	//else
	//	cout << "Pork belly is yummy!\n";
	//// Can also use {} with else statements to output multiple lines

	//if (0)
	//	cout << "nope";
	//else if (1)
	//	cout << "Witches are best in sand.";

	/*
	Conditional Operator: "? :"
	
	- (bool condition) ? option1 : option2
	
	- Takes three operands (or evaluates three expressions)
	
	- Condition to be evaluated as a boolean value
	- '?' Begin analyzing condition
	- ':' Choose between left or right option based on boolean value of condition
	- If condition evaluates as true, then output left
	- If condition evaluates as fulse, then output right
	*/

	//5 > 4 ? cout << 'a' : cout << 'b';
	//cout << " " << endl;

	//
	//int x = 5 < 4 ? 1 : 2; // Conditionals can be assigned to values!!!
	//cout << x << endl; 

	/*
	Switches 

	- Alternative to lots of if/else-if statements
	- Matches two equal values together
	- Only works with ints (+/-) and chars!!!!
	- CANNOT CHECK AGAINST STRINGS, CLASSES, OR DOUBLES!!!! 

	- Add a 'break' before next case to stop switch, else all cases are evaluated
	- 'cases' can be stacked
	= 'default' is the same as 'else' 
	*/

	switch (1) { //Argument to be checked against
	case 1:
		cout << "at 1" << endl; 
	case 2:
		cout << "at 2" << endl;
	case 3:
	case 4:
		cout << "at 3" << endl;
		cout << "at 4" << endl;
		break;
	default: // Can be used if no other cases are met
		cout << "at 5" << endl;
	}

	/* Variables within a function cannot be evaluated outside that function
	Unless they are global variables */

	string y;
	getline(cin, y);
	return 0;
}