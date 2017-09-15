#include <iostream>
using namespace std;


int main() {
	
	int number;
	
	cout << "Enter week day number: ";
	cin >> number;
	
	if (number == 1) {
		cout << "The day is Monday.";
	}
	
	else if (number == 2) {
		cout << "The day is Tuesday.";
	}
	
	else if (number == 3) {
		cout << "The day is Wednesday.";
	}
	
	else if (number == 4) {
		cout << "The day is Thursday.";
	}
	
	else if (number == 5) {
		cout << "The day is Friday.";
	}
	
	else if (number == 6) {
		cout << "The day is Saturday.";
	}
	
	else if (number == 7) {
		cout << "The day is Sunday.";
	}
	
	else {
		cout << "You entered a wrong number.";
	}
	
	cout << endl;
	
	return 0;
}
