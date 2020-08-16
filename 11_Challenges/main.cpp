#include <iostream>
#include <string>
#include <gsl/gsl>

using namespace std;

inline int In_Func(const int& x) {
	Ensures(x > 0);
	return 5;
}

inline string In_Func2(const string* z) {
	Ensures(z != NULL);
	return "Cheese";
}

//constexpr within parameters throws error
char A_variable(const char q) {
	return q;
}

 //Need to go over, function is being wonky

// intialize empty string
string s_new = "";

string Recurve(string s = "Hello") {
	//for each letter of s 'i', subrtract it by 1 and iterate through each letter until there are no more letters
	for (int i = s.size() - 1; i >= 0; --i) {
		//insert each iteration of s to the 'i'th postion into the empty string 
		s_new += s[i];
	}
	// return the new string
	return s_new;
}



inline int subtraction(int a, int c, int e) {
	return a - c - e; 
}

constexpr int Compiled_number = 12;
constexpr char Compiled_letter = 'g';

//constexpr string will throw error, instead used constexpr char array
constexpr char Compiled_sentence[] = "Coby likes bacon.";
constexpr double Compiled_big_number = 1243455673456567.567456334;


int main() {

	string boom = "boom";

	cout << Recurve() << endl;

	//cout << Recurve(&racecar) << endl;

	const int number = 7;
	const char letter = 'a';
	const string words = "A set of words";
	const double Big_Number = 55787764.3456;

	
	const int* pnumber = &number;
	const char* pletter = &letter;
	const double* pBig_Number = &Big_Number; 

	const int five = 5;
	const int* pfive = &five; 

	cout << pBig_Number << endl; 

	In_Func(4);
	cout << In_Func(4) << endl; 

	const string sentence = "A brindle coby.";

	In_Func2(&sentence);
	cout << In_Func2(&sentence) << endl; 

	cout << Compiled_sentence << endl;

	int testing = subtraction(5, 7, 29);
	cout << testing << endl; 

	return 0;
}