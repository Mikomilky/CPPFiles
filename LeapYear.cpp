#include <iostream>
using namespace std;
int main() {
	int year;
	bool isLeapYear;

	cout << "�������:";
	cin >> year;
		isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

	if (isLeapYear)
		cout << year << "������" << endl;
	else
		cout << year << "��������" << endl;
	return 0;
}



