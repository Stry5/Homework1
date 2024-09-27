

#include <iostream>
using namespace std;

int main()
{
	int input;
	int output[8];
	cout << "Input a positive number between 0 and 255." << endl;
	cin >> input;
	while (input < 0 || input > 255) { //checks to see if number is within range
		cout << ">:( that is not a valid number. please input a new number.\n"; 
		cin >> input;
	}

	for (int i = 7; i >= 0; i--) {


		if ((input - pow(2, i)) >= 0) {
			output[8 - (i+1)] = 1;
			input = input - pow(2, i);
		}
		else {
			output[8 - (i + 1)] = 0;
		}
	}

	cout << "[ ";
	for (int i = 0; i < 8; i++) {
		cout << output[i] << ' ';
	}
	cout << "]";
}
