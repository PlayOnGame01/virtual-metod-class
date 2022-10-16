#pragma once
#include <iostream>
using namespace std;

class Info {
protected:
	char* place;
	char* name;

public:
	Info() {
		place = nullptr;
		name = nullptr;
	}

	Info(const char* n, const char* p) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		place = new char[strlen(p) + 1];
		strcpy_s(place, strlen(p) + 1, p);
	}

	virtual ~Info() {
		delete[] name;
		delete[] place;
	}

	void Input() {
		char num[20];

		cout << "Enter name: ";
		cin.getline(num, 20);
		name = new char[strlen(num) + 1];
		strcpy_s(name, strlen(num) + 1, num);

		cout << "Enter living place: ";
		cin.getline(num, 20);
		place = new char[strlen(num) + 1];
		strcpy_s(place, strlen(num) + 1, num);
	}

	virtual void Print() = 0;

};