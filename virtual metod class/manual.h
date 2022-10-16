#pragma once
#include <iostream>
using namespace std;

class Manual {
	int amount_w;
	int amount_r;
	int amount_g;

public:
	Manual() {
		amount_w = 0;
		amount_r = 0;
		amount_g = 0;
	}

	void Input() {
		cout << "\n\nEnter amount of wolf: ";
		cin >> amount_w;

		cout << "Enter amount of rat: ";
		cin >> amount_r;

		cout << "Enter amount of ground: ";
		cin >> amount_g;
	}

	void Compare() {
		if (amount_g > amount_r) {
			cout << "ground keeps growing" << endl;
		}
		else if (amount_g < amount_r) {
			cout << "ground was destroyed due to rat" << endl;
		}
		else if (amount_r < amount_w) {
			cout << "rat were eaten by wolf" << endl;
		}
	}

};