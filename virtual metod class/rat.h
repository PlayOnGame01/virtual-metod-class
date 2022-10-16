#pragma once
#include "Info.h"
#include <iostream>
using namespace std;

class Rat : public Info {
protected:
	int year;
	int amount_rat;

public:
	Rat() {
		year = 0;
		amount_rat = 0;
	}

	Rat(int y, const char* n, const char* p) : Info(n, p) {
		year = y;
	}

	void Death() {
		if (year > 9) {
			cout << name << " DEAD!" << endl;
		}
		else if (year >= 0 && year <= 9) {
			cout << name << " alive!" << endl;
		}
	}

	void Print() {
		cout << "Enter life span of " << name << ": "; cin >> year;

		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
		cout << "Life span: " << year << endl;

		this->Death();
	}

};
