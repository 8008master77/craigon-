//MatthyseC
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void binaryToDecimal() { //convertion to decimal
	// Binary strings to Decimal numbers
	string binary;
	int decimal = 0;
	int power = 0;

	cout << "Enter a binary number: ";// prompt user for number 
	cin >> binary;

	int length = binary.length();
	for (int i = 0; i < length; i++) {
		if (binary[length - 1 - i] == '1') {
			decimal += pow(2, i);
		}
	}
	cout << "Decimal value: " << decimal << endl;
}

void decimalToBinary() {
	// decimal numbers to binary strings
	int decimal;
	string binary = "";

	cout << "Enter a decimal number: ";// prompt user to enter decimal number 
	cin >> decimal;

	if (decimal == 0) {
		binary = "0";
	}
	else {
		// here, the algorithm is to divide by 2 and we keep track of the remainder.

		while (decimal > 0) {
			binary += to_string(decimal % 2);
			decimal /= 2;
		}
		// The reminders are in reverse order , so we flip string 
		reverse(binary.begin(), binary.end());
	}
	cout << "Binary value: " << binary << endl;
}
int main() {
	int choice;

	// Display menu//display meneu 
	cout << "Menu:" << endl;
	cout << "1. Binary to Decimal" << endl;
	cout << "2. Decimal to Binary" << endl;
	cout << "Enter your choice: "; 
	cin >> choice;

	if (choice == 1) {
		binaryToDecimal();
	}
	else if (choice == 2) {
		decimalToBinary();
	}
	else { 
		cout << "Invalid choice. Please enter 1 or 2." << endl;
	}
	return 0;// return to 0 
}









































