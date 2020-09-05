#include <iostream>
#include <string>

using namespace std; 

enum flowers { roses, violets, daisies };

void FlowerType(flowers f) {
	switch (f) {
	case roses:
		cout << "You have roses." << '\n';
		break;
	case violets:
		cout << "You have violets." << '\n';
		break;
	case daisies:
		cout << "You have daises." << '\n';
		break;
	default:
		cout << "You don't have any flowers..." << '\n';
	}
}

enum names {
	Kavi = 'b',
	Coby = 'z',
	Emmet = 246
};

void Name_values(names v) {
	cout << v << '\n';
}

enum class Vegetables {
	Cucumber,
	Brocolli,
	Corn,
	Spanich,
	Squash
};


enum class Breads {
	Rye,
	Whole_Wheat,
	White,
	Seven_Grain
};

int a = int('a');
int b = int('b');
int c = int('c');
int d = int('d');
int e = int('e');
int f = int('f');
int g = int('g');

struct Fighter {
	int health;
	int strength;
	string Street_Fighter;
};

struct Dog {
	int fur = 5;
	string name;
	double crazy;
};



int main() {

	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << d << '\n';
	cout << e << '\n';
	cout << f << '\n';
	cout << g << '\n';


	FlowerType(roses);
	Name_values(Kavi);

	Fighter Ryu{ 1000, 130, "The World Warrior" };
	cout << Ryu.health << '\n';
	cout << Ryu.Street_Fighter << '\n';

	Fighter Ken{ 990, 150, "The Firey Spirit" };
	cout << Ken.strength << '\n';
	cout << Ken.Street_Fighter << '\n';

	Fighter Dan{ 100 , 5, "FAAAATTTHHHHEEEERRRRRR!" };
	cout << Dan.strength << '\n';
	cout << Dan.Street_Fighter << '\n';

	Dog Coby{ 20, "Coby", 900000000000000000 };
	cout << Coby.name << '\n';
	cout << Coby.fur << '\n';

	string Enter;
	getline(cin, Enter);

	return 0;
}