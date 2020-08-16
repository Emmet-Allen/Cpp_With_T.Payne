#include <gsl/gsl>
#include <iostream>
#include <string>

int factorial(int q) //Factorial: 5! multiplying each number from n downward
{
	Expects(q > 0); //exect that i is greater than 0, if its negative number or 0, then it'll break
	if (q <= 0)  // if i is less than or equal to 1 
		return 1;
	return factorial(q - 1) * q; // if it isn't then call function 'factorial' and perform (i - 1) * i
}