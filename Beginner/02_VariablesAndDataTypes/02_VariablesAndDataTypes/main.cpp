#include <iostream>
#include <string>

/*using namespace = sets the current namespace,
brings in all necesscary function */
using namespace std; 

int main() {
	/*
	int x = 1;  //Create & Intialized Value 
	int y(2);	//Contructor Initalization
	int z{ 3 };	//Uniform Initalization

	int cars = 14;
	int debt = -1000;
	float cash = 2.32;
	double credit = 32.32;
	char a = 'a';
	string sandwich = "ham"; //Could also use char* sandwich = "ham"; using asterisk to symbolize an array of char's ['h','a','m']
	bool does_she_like_me = true;
	auto do_i_have_pants_on = false;
	auto blank_check = 200.00;
	int over_9000 = INT_MAX; //INT_MAX is the maximum value of an interger

	cout << over_9000 << endl; //endl = end line, ends the output stream AND inserts a break
	int _ = 5;
	cout << _ << endl;
	*/
	
	/*
	//sizeof() shows how many bytes (8 bits = 1 byte) are used for the specific data type
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;

	cout << ' ' << endl;
	cout << sizeof(short int) << endl;//Short Sized Int
	cout << sizeof(long int) << endl; //Default Int
	cout << sizeof(long long int) << endl; //Size of a Double
	*/

	/* signed int x = -1; //signed = range of numbers that include positive and negative values, default (-32k to 32k)
	unsigned int y = -1; //unsigned = range of ONLY positive numbers (0 to -65k)
	cout << x << endl;
	cout << y << endl; 
	*/

	cout << INT_MIN << endl;
	cout << INT_MAX << endl;
	cout << LONG_MIN << endl;
	cout << LONG_MAX << endl;
	cout << SHRT_MIN << endl;
	cout << SHRT_MAX << endl;
	cout << 0 << endl;
	cout << USHRT_MAX << endl; //USHRT_MAX = unsigned SHRT_MAX

		/*....*/;
		return 0;
}

/* Variables are used to store data, in C++
need to be more specific on the type of data*/

/*Types: char, bool, int, float, double, void,
auto, null pointer*/

/*
	char = individual character ('a', 'x')
	bool = boolean (true,false)
	int = interger (11,-5, 455)
	float/double = real values, ability to hold small decimial values (3.0, 4.45, 0.00006)
	void = no storage, absence of a value
	auto = type is determined automatically when values set
	null pointer = empty pointer*

	Can have many more by importing libaries, etc... into your program

	When creating variables only use letters, numbers and underscores (a,_,4)
	Cannot start  a varialbe name with a number
	Can be as sort as a singlular letter or underscore
	
	When finding the MAX or MIN of a all variables by going to:
	cplusplus.com/reference/climits/
*/

