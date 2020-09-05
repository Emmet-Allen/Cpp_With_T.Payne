#include <iostream>
#include <string>
#include "add_Two.h"
#include "Sandwich.h"
#include "main.h"

using namespace std; 


int main() {

	int x = 20;
	
	shockalockaboomdiddyboom::add_Two(x);

	cout << SINGLE_LETTER << std::endl;
	cout << NEGATIVE_NUM << endl;
	cout << NEGATIVE_SUPER_NUM << endl;

	Bolognia::Cheese::Sandwich();

	string Enter;
	getline(cin, Enter);
	return 0; 
}