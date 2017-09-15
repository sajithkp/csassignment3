#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	char input;
	
	cout << "Enter a character: ";
	cin >> input;
	
	if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
		cout << input << " is an alphabet.";
	}
	
	else {
		cout << "You didn't enter an alphabet.";
	}
	
	cout << endl;
	
	return 0;
}
