#include <iostream>
#include <cmath>
#include "test.h"

/*
Visual Studio Tips:

- Breakpoint =  stops program to debug
	- to create, click 'gray bar' left of line numbers to create 

- Step Into: go into a function that's being called

- Step Over: proceed to next line of code

- Step Out: exit current function call

- To skip some code, set further breakpoint and click 'Continue' at top

- Disable Breakpoint: hover over it! 

*/

/*
Values + Funcs

- Local window appears when debugging and displays variable values!

- To find a function definition or declaration, right click on it being used and select:
	- Peek Definition: mini-window to edit 
	- Go to Definition: takes you to it
	- Go to Declaration: ""
	- Find All References: list out all calls to var/func/class

*/


/*
More Buttons

- Find/Replace = quickly jump to stuff!
	- Avoid REPLACE ALL, as it could break your code

- Comment/Uncomment = reduces typing

- Bookmark = set markers throughout your solution and easily jump between them!
	- Saved with solution

*/

/*
Math + Logic Q's

Math:
- Did I avoid dividing by zero? (5/0)
- Did I avoid modulo zero? (5%0)
- Did I initalize all variables? (int x = 0;)

Logic 
- 'if' statments not evaluating correctly:
	- does stepping through help?
	- also check logic operators (==, <, ...)

*/

/*
Array + Loop Q's

Arrays:
	- is index further than array size?
	- is '\0' too soon or not present in char arrays?

Loops:
	- only loops once = is condition wrong?
	- skips values = incrementing too much?
	- infinite = is condition/incrementing correct?
	- is var being reset elsewhere in code? 

*/

/*
Pointers:

- is pointer uninitalized or value at addressed erased? 
- could I use 'shared_ptr', 'unique_ptr', etc.?
- did I correctly use * or [0] to access data?
- did I use -> instead of . to access data? 

*/

/*
Functions:

- is scope/namespace correct?
- are declaration and definition the same? ( name, return type, parameters)
- is the return implemented?
- are the declaration/definition placed properly in program? (header/ cpp files)

Enum/Struct/Class:

- Do they have ; placed after last brace }?


*/

/*
BIG QUESTIONS!	

1) What is the furtherst along the program works correctly?

2) Where are my variables being modified unusually?

3) Could I have reduced code anywhere to make things simpler?

4) Have I been practicing debugging? 


*/




void print_Int(int* z) {
	std::cout << "Ham\n";
	std::cout << *z << '\n';
	*z++;
}

int main() {
	int a = std::fmax(-5, 4);
	int* p = &a;
		print_Int(p);
	for (int i = 0; i < 10; i++) {
		std::cout << i << '\n';
	}

	print_Int(p);
	test::test();
	return 0; 
}