#pragma once
#include "Info.h"
#include <iostream>
using namespace std;

class Ground : public Info {
protected:
	int amount_grass;

public:
	void Print() {
		cout << "\nName: " << name << endl;
		cout << "Place: " << place << endl;
	}

};

