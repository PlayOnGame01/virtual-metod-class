#pragma once
#include "Info.h"
#include "manual.h"
#include <iostream>
using namespace std;

class Wolf : public Info {
protected:
	int year;
	int amount_fox;

public:
	Wolf() {
		year = 0;
		amount_fox = 0;
	}

	Wolf(int y, const char* n, const char* p) : Info(n, p) {
		year = y;
	}

	void Death() {
		if (year > 4) {
			cout << name << " Dead!" << endl;
		}
		else if (year >= 0 && year <= 4) {
			cout << name << " Alive!" << endl;
		}
	}

	void Print() {
		cout << "Enter age of " << name << ": "; cin >> year;
		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
		cout << "Age: " << year << endl;
		this->Death();
	}

};