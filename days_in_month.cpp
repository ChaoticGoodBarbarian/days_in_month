#include <iostream>

int main() {
	int year;
	int month;

	std::cin >> month >> year;

	if ((month < 1) || (month > 12) ||
		(year < 1) || (year > 9999)) {
		std::cout << "ENTER VALID DATA\n";
	}

	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
		if (month == 2) {
			std::cout << 29;
		}
		else if (month == 4 ||
			month == 6 ||
			month == 9 ||
			month == 11) {
			std::cout << 30;
		}
		else {
			std::cout << 31;
		}
	}
	else {
		if (month == 2) {
			std::cout << 28;
		}
		else if (month == 4 ||
			month == 6 ||
			month == 9 ||
			month == 11) {
			std::cout << 30;
		}
		else {
			std::cout << 31;
		}
	}
}