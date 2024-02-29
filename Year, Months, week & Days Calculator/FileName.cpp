#include <iostream>
using namespace std;
int main() {
	int years, months, weeks, days, day;
	cout << "\n\n\t\t Welcome to Years, Months, Week & Days Calculator\n\n";
	cout << "\t\t\tEnter Amount Of Days: ";
	cin >> days;
	years = days / 365;
	cout << "\n\n\t\t\tAmount Of Year is: " << years << endl;

	months = (days - (years * 365)) / 30;
	cout << "\t\t\tAmount Of Months is: " << months << endl;

	weeks = (days - (years * 365) - (months * 30)) / 7;
	cout << "\t\t\tAmount Of week is: " << weeks << endl;

	day = (days - (years * 365) - (months * 30) - (weeks * 7));
	cout << "A\t\t\tmount Of Days Are: " << day << endl << endl;
	return 0;
}