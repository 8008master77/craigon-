// Matthyse Craigon 
// 162514274

#include <iostream>
#include <Limits>
using namespace std;

int main() {
	int TEMP1, TEMP2, TEMP3;
	int diff;

	cout << "Enter the 1st temperature ";// enter temp1
	cin >> TEMP1;
	cout << "Enter the 2nd temperature ";
	cin >> TEMP2;
	diff = TEMP1 - TEMP2;

	if (diff > 50) {

		cout << "please rudece the heat of the fryer before entering the 3rd" << endl;

	}
	else if (diff < 10) {
		cout << "the heat of the fryer is good to enter the 3rd" << endl;
		cout << " Resetting...." << endl;
	}
	else {
		cout << "the heat temperature is optional" << endl;
	}

	cout << "Enter the 3rd temperature ";
	cin >> TEMP3;
	if (TEMP3 >= 150 && TEMP3 <= 190) {
		cout << "temperature is good , so you may start frying the magwinyas" << endl;
	}
	else{
		cout << "the heat of the fryer is too low for frying" << endl;
	}
	cout << "\n---------------------------" << endl;
	cout << "Thank you for using the fryer temperature checker press enter  to exit" << endl;
}
































