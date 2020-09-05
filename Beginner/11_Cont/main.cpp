#include <gsl/gsl>
#include <iostream>


/*
	Overloading: Multiple functions of same name but different parameters

	- Core Guidelines: Perfer default parameteres and programs to overloading
*/

int add(int a, int b) {
	return a + b;
}

// Inefficient, code would be duplicated many times
int add(int a, int b, int c) {
	return a + b + c;

}

//Perfered Method, use default code for more parameters
int add(int a, int b, int c = 0) {
	return a + b + c;
}
/*
	Recursion: Calling a function within itself
*/

//long long int factorial(long long int q) //Factorial: 5! multiplying each number from n downward
//{
//	Expects(q > 0); //exect that i is greater than 0, if its negative number or 0, then it'll break
//	if (q <= 0)  // if i is less than or equal to 1 
//		return 1;
//	return factorial(q - 1) * q; // if it isn't then call function 'factorial' and perform (i - 1) * i
//}

int main() {

	add(1, 2, 3);

	/*std::cout << factorial(3) << std::endl; */

	return 0;
}