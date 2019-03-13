// CPPClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class float_array {
public:
	float *ptr;
	int amount;

	float_array(int i) {
		ptr = new float[i];
		amount = i;
	}

	~float_array() {
		delete ptr;
	}

	void setfloat(int i, float n) {
		*(ptr + i) = n;
	}

	double getfloat(int i) {
		return *(ptr + i);
	}

	double average() {
		float total = 0;
		int i;
		for (i = 0; i < amount; i++)
			total += *(ptr + i);
		return total / amount;
	}

	float largestN() {
		float f;
		int i;
		f = *ptr;
		for (i = 1; i < amount; i++)
			if (*(ptr + i) > f)
				f = *(ptr + i);
		return f;
	}

	float smalletsN() {
		float f;
		int i;
		f = *ptr;
		for (i = 1; i < amount; i++)
			if (*(ptr + i) < f)
				f = *(ptr + i);
		return f;
	}

};

int main() {
	int amount, i;
	float f;
	cout << "Numbers of values in array? ";
	cin >> amount;
	float_array  numbers(amount);
	cout << "Enter values:\n ";
	for (i = 0; i < amount; i++) {
		cout << "Enter number" << i + 1 << ": ";
		cin >> f;
		numbers.setfloat(i, f);
	}
	cout << "The array:\n";
	for (i = 0; i < amount, i++;)
		cout << numbers.getfloat(i) << " ";
	cout << endl;
	cout << "Largest value is: " << numbers.largestN() << endl;
	cout << "Smallest value is:" << numbers.smalletsN() << endl;
	cout << "The average value is: " << numbers.average() << endl;
	return 0;
}