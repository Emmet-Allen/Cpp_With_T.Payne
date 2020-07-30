#include <iostream>
#include <string>

using namespace std; 

/* Arrays: Series of elements of the same data type

- Hold a series of elements of the same type
- Must declare the type and name e.g. int ham_slices
- Then square brackets that may/may not contain size of array e.g. [] or [3]
- Then may/may not contain an equal sign after the square brackets
- Lastly may or may not set the default values using curley braces (assigned to spot 0 and upward)

*/

int main() {
//
//	int my_array[2];
//	my_array[0] = 0;
//	my_array[1] = 1;
//
//	int my_array2[3] = {0,1,2};
//	int my_array3[3]{4}; // Equal sign doesn't need to be declared when declaring values within the array
//	int my_array4[]{7,7,7}; //Value of array in brackets will be determined by amount of values within the array 
//	int my_array5[4]{}; //Set the entire array as 0 
//
//	cout << my_array3[2] << endl; //If not enough arguemnts are set within the array, the array will default the missing values to 0

	/*
	Once an array is initalized, you can only access items within the array!!!
	One vaule within the array can be accessed/set at a time!!!
	Cannot set an array to a default size of 0!!!
	*/

	/*
	Arrays are chunks of data stored within your computers memory and are very restricted
	Resturant Table Analogy:

	If you reserve a table for a size of 4 people, you can have all 4 people sit at the table.
	If you reserve a table for a size of 5 people, and 3 show up, you can fit 3 people but those 2 missing sits are people coming in later.
	If you reserve a table for a size of 5 people, and no one shows up, then all the seats are empty (0).
	However, you CANNOT change the table size, once it is set, it is set in stone!!!
	*/

	/*
	//2D Arrays
	//
	//Arrays within arrays
	//Think of it as rows + columns like a spread sheet
	//They take up the same amount of space as a single long array
	//The same rules of single arrays also apply to 2D arrays
	//Can have infinite dimension [x][y][z]... but other data structures are better
	*/

	//int array_2d[2][3];
	//array_2d[0][0] = 1; 
	//array_2d[1][2] = 6;

	///*
	//Char Arrays

	//'C' style strings
	//Would allow the user to create sentences and what not.
	//*/

	//char a[] = "asdf" ; //Don't have to define each value with curly braces {}, instead use double quotes ""
	//char b[5] = "asdf"; //At the end of every char array, there is a null character
	//char c[]{ 'a','b','\0' }; //If null characters is not included, the computer will output previous (garbage) memory
	//char d[]{ 'a','b','\0', 'c', '\0' }; //Once null character is outputted no other value after the null character will be accessed

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;

	///*
	//Special Characters
	//
	//\0 = null characters
	//\n = new line
	//\t = tab
	//\v = vertical tab
	//\b = backspace
	//\r = carraige return (return character)
	//\\ = backslash
	//\? = question mark
	//\' or \" = quotes

	//*/

	///*
	//Strings

	//Much bigger than char arrays
	//More functionality 
	//

	//*/



	//cout << sizeof(string) << endl; //28 bytes: bigger due to amount of functionality 
	//cout << sizeof(char) << endl; //1 byte: char arrays can be used to reduce size if necesscary
	//cout << " " << endl;

	//string ham = "Ham";
	//string sandwich = "Sandwich";
	//ham.swap(sandwich); //.swap is used to swap one string for another, without needing to create a temp variable 
	//
	//cout << " " << endl;
	//
	//cout << ham << endl; //"Sandwich" will output because of .swap
	//cout << sandwich << endl;//"Ham" will output because of .swap
	//
	//cout << " " << endl;
	//
	//cout << ham.size() << endl; //.size will findout the amount of characters within the string
	//
	//cout << " " << endl;
	//
	//cout << ham.find('a') << endl; //.find will look for the character and output the interger value of the first instance 
	//
	//cout << " " << endl;
	//
	//cout << ham[0] << endl; // Accessing location of a certain value using [] and a location number we want to access
	//
	//cout << " " << endl;
	//
	//string x = ham + sandwich; //Strings can be added together
	//sandwich += ham; // another method of adding strings together
	//cout << sandwich << endl; 

	string y;
	getline(cin, y);
	return 0; 
}

