#include <iostream>
#include "print_Ham.h" //import the header file we are going to create 

void ham::sandwich::print_Ham() { //add ham scope to function name 'ham::' then use nested namespace of 'sandwich' by calling 'sandwich::'
	std::cout << "ham";
}