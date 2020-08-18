#include <iostream>
#include <string>


using namespace std; 

/*
Enum (Enumerator)

 - Almost the simplest way for user to create own data type
	- (typedef easier, covered later)

 - Values within are incrementing integers starting with '0'

 - Values stores as symbolic constants 
	- aka 'unchangeable variables'

 - Commas seperate every element

 - Lowercase for values, uppercase for enum name

 - End with Semicolon after '}'

 CPP Core-Guidelines
  - ENUM.5: Don't use caps for enums besides for the enum name
  
  - ENUM.6: Avoid unnamed Enums

*/


// start with enum to signify data type category and use curly-brackets '{}' to place each value/items
 //seperate the items within the curly-brackets by commas 
// end the decleration with a semi-colon outside the closing curly-brackets
 enum Animals { dog, cat, deer, sloth, pig};

 // Can list out enum values either on same-line or on concurrent lines
 //enum Groceries {
	// ham,
	// eggs,
	// milk
 //};

 /*
Enum Use

 - Useful for list of items within a category where value doesn't matter
	- Examples: Colors, Error Codes


*/

 enum Whatever
 {
	 crap = 'a'
 };

 enum Groceries {
	 ham = 5, // Set to 5 and will increment for each enum value
	 eggs, // 6
	 milk = crap // set to crap, which is the 'a' character, which has a value of 97
 };

 void GroceryPrinter(Groceries g) {
	 switch (g) {
	 case ham:
		 std::cout << "You have HAM!";
		 break;
	 case eggs:
		 std::cout << "You have EGGS!";
		 break;
	 case milk:
		 std::cout << "You have MILK!";
		 break;
	 default:
		 std::cout << "You are very, very sad.";
	 }
 }

 //enum Cloths {shirt, cap, dress};
 //enum Pen {cap, body, ink};

 /*
 Enum Classes

 - Gives scope to values

 Cpp Core Guidelines:

	- ENUM.1: Prefer enums over macros (when its applicable) 
	
	- ENUM.3: Prefer enum classes over plain enums (enum classes provide scope for the values stored within it)

	- ENUM.7/8: Specificy the underlying type and values of enumerators ONLY when necesscary

 */

 enum NonClassColors {
	 red = 0x00FF00, //Random Hexidecimal value which will be converted into an int and incremented upon
	 green, 
	 blue
 };

 enum class ClassColors {
	 red = 'a', 
	 green = 0x00FF00,
	 blue = 0x0000FF
 };


 // The colon ':' after the enum variable name, declares the enum type... but will still be converted to an int anyway
 // Not much point
 enum asdf : char {
	 a1 = 'C',b1,c1
 };


/*
ASCII : American Standard Code for Inoformational Interchange

 - 128 bits (2^7) hold most important characters on keyboard

 - Extended ASCII includes additional 128 bits (256 bits total or 1 byte)

 - asciitable.com = lookup table for it

 - Unicode has +1.1 million chars 
	- first bytes is reserved for ascii

- 'a' was converted to ascii value of 97!


*/


/*
Struct

 - Aggregate data type or way to package related vars together 

 - A collection of 'public' variables (anyone can access this data)

*/

 /*
 Other Stuff

 - Can nest enums within enums or structs within structs
	- cover more with classes

 - C.8: Use class rather than struct if any member is non-public (more later)

 - Create enums/structs in header files
 
 
 */


 // Can be on same line, but for readablity place values on concurrent lines
 struct Cat {
	 int hair_length; // Declare the variables you want, can also set values to those variables
	 string hair_color;
	 int fatness = 5; 
	 struct Ringworm {
		 int fatness;
	 };
 };


int main() {

	//std::cout << dog << '\n'; // enums record values as ints starting from 0
	//std::cout << pig << '\n';
	//std::cout << ham << '\n';
	//std::cout << (dog == ham) << '\n'; // returns true because they are both set to '0' in their respective enums

	// Can set an enums variable using either equal sign '=' or parentheses '()'
	//Groceries h = ham;
	//Groceries e(eggs);
	//GroceryPrinter(e);


	
	// Multiple Enums of the same name causes a runtime error
	//std::cout << cap;


	//std::cout << red << '\n';

	// Uses the scope operator with the enum class name and the variable that you want to access 
	// Type casted with int, so that we can see the interger value
	//std::cout << (int)ClassColors::red; 

	// Will output 68 which is 'D' in ASCII
	//std::cout << '\n' << b1; 

	Cat purrple{ 8 , "Black and White", 5 }; // Values are being assinged, based on the order and type of the variables decalred within the struct
	Cat meowzer = { 5, "Calico", 3 }; // Equal Sign '=' not neccesscary 
	cout << purrple.hair_color << endl; // Use dot '.' accessor to access data stored within the struct
	cout << meowzer.hair_length << endl;

	purrple.hair_length = 10; // If we want to change the value  just access the variable with a dot '.' and assign a new value 
	meowzer = { 6, "Calico", 7 }; // can also change all the values at once, using curly brackets '{}'
	cout << meowzer.hair_length << endl; 

	Cat::Ringworm r{ 1 };

	cout << r.fatness << endl;

	return 0;
}

/* 
AVOID THESE (For Now)

- C.7: Don't define a class/enum and declare an instance (a variable and its type) in the same statement.
	example : struct Blah {int a =5;} avoidThis {};
*/