#include <iostream>
#include <string>


class Broccoli {
	int fiber = 7;
};

class Spanich {
	int fiber = 4;
};

class Corn {
	int fiber = 2;
};

class Fighter {
private:
	int health;
	int attack;
public:
	Fighter() { //Constructor needs to be same name as Class
		health = 50;
		attack = 30;
	}

	void print_Info() {
		std::cout << health << '\n';
		std::cout << attack << '\n';
	}

};

class Unicorn_Spottings {
private:
	int count = 12;
public:
	void get_Count() {
		std::cout << count << '\n';
	}
	void add_Count() {
		count++;
		std::cout << count << '\n';
	}
	void remove_Count() {
		count--;
		std::cout << count << '\n';
	}
};

int main() {
	Fighter Ryu;
	Ryu.print_Info();

	Unicorn_Spottings Sparkles;
	Unicorn_Spottings* Point_Sparkles = &Sparkles;

	Point_Sparkles->get_Count();
	Point_Sparkles->add_Count();
	Point_Sparkles->remove_Count();

	return 0;
}