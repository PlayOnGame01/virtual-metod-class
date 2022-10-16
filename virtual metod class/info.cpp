#include <iostream>
#include "wolf.h"
#include "rat.h"
#include "ground.h"
#include "Manual.h"
#include "info.h"
using namespace std;

int main() {
	Info* info = nullptr;

	int choose = 0;
	cout << "1. wolf\n2. rat\n3. ground\n-> ";
	cin >> choose;
	cin.ignore();

	switch (choose) {
	case 1:
		info = new Wolf();
		break;

	case 2:
		info = new Rat();
		break;

	case 3:
		info = new Ground();
		break;
	}
	info->Input();
	info->Print();
	Manual obj;
	obj.Input();
	obj.Compare();



}