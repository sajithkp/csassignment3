#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	if (number % 55 == 0) {
		cout << "The number is dvisible by both 5 and 11.";
	}
	
	else {
		cout << "The number is not divisible by 5 and 11.";
	}
	
	cout << endl;
	
	return 0;
}
