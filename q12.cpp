#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int mN;
	
	cout << "Enter the number of the month: ";
	cin >> mN;
	
	if (mN == 1 || mN == 3 || mN == 5 || mN == 7 || mN == 8 || mN == 10 || mN == 12) {
		cout << "The number of days in the month is 31.";
	}
	
	else if (mN == 4 || mN == 6 || mN == 9 || mN == 11) {
		cout << "The number of days in the month is 30.";
	}
	
	else if (mN == 2) {
		cout << "The number of days in the month is 28 or 29, depending on whether it is a leap year or not.";
	}
	
	else {
		cout << "You didn't enter a valid month number.";
	}

	cout << endl;
	
	return 0;
}
