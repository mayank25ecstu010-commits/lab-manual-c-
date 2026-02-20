
#include <iostream>
using namespace std;

int main() {
	int year;

	cout << "Enter a year: ";
	cin >> year;

	bool isLeap = false;

	if (year % 400 == 0) {
		isLeap = true;
	} else if (year % 100 == 0) {
		isLeap = false;
	} else if (year % 4 == 0) {
		isLeap = true;
	}

	if (isLeap) {
		cout << year << " is a leap year (February has 29 days).";
	} else {
		cout << year << " is not a leap year (February has 28 days).";
	}

	return 0;
}
 