#include <iostream>
#include <string>

using namespace std; 

int main() {

	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}

	cout << " " << endl;

	for (int j = 0; j <= 100; j++) {
		if (j % 2 == 0) {
			cout << j << endl;
		}
	}

	cout << " " << endl;

	for (int k = 0; k <= 100; k++) {
		if (k % 2 != 0) {
			cout << k << endl;
		}
	}

	cout << " " << endl;

	// Create char array
	char a[] = "dude";

	// While checking through the length of the char arry
	while (strlen(a)) {

	// Have the char of 1 minus the length of the array equal to null 
		a[strlen(a) - 1] = '\0';
		cout << a << endl;
	}
	
	
	int f = 0;
	do {
		f++;
		cout << f << endl;
	} while(f < 12);

	cout << " " << endl;

	// First loop through multiples
	for (int l = 0; l <= 10; l++) {
		// Output each iteration of multiples
		cout << l << endl; 
		// Then loop through the multiples of each multiple up to 10
		for (int q = 0; q <= 10; q ++) {
			// Output q * l to 3 digits ("%03d)
			printf("%03d", q * l); //printf controls how much digits are being outputed
			cout << endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
string y; getline(cin, y);
return 0;

}