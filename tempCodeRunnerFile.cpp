#include <iostream>
#include <iomanip>

using namespace std;
//Function tochaeck if a year given is a leap year

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

//Function toprint the calendar of a given year

void printCalendar(int year) {
	const string months[] = { "January","Febuary","March","April","May","June","July","August","September","October","November","December" };
	const int daysInMonth[]{ 31 ,28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const string dayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	cout << "Calendar for year " << year << " :" << endl;

	for (int month = 0; month < 12; month++) {
		cout << "\n -----------------------------\n";
		cout << "               " << months[month] << endl;
		cout << "\n -----------------------------\n";
		cout << "  Sun Mon Tue Wed Thu Fri Sat\n";

		int startingDay = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

		//print loading spaces
		for (int i = 0; i < startingDay; i++) {
			cout << "    ";
		}

		//print Days
		for (int day = 1; day <= daysInMonth[month]; day++) {
			cout << setw(4) << day;
			//If we are at the last column, start a new line
			if ((day + startingDay) % 7 == 0 || day == daysInMonth[month]) {
					cout << endl;
			  }
		}
	}
}

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	printCalendar(year);
	return 0;
}

