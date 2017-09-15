#include <iostream>
using namespace std;


int main() {
	
	double num;
	
	cout << "Enter your number: ";
	cin >> num;
	
	if (num > 0) {
		cout << "The given number is positive.";
	}
	
	else if (num == 0) {
		cout << "The given number is zero.";
	}
	
	else {
		cout << "The given number is negative.";
	}
	
	cout << endl;
	
	return 0;
}


