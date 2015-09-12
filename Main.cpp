#include <iostream>
#include "mastercard.h"

using namespace std;

int main() {
	int card_choice;
	bool card_valid;
	int cc_number;
	cout << "Credit card validator.";
	cout << "\nPlease select the vendor: ";
	cout << "\n1: Mastercard" << "\n2: Visa" << "\n3: TODO" << "\n";
	cin >> card_choice;
	cout << "\nType in your credit card number" << "\n";
	cin >>  cc_number;

	switch (card_choice) { 
	case 1: //mastercard
		card_valid = mastercard::luhn_test(cc_number);
		break;

	case 2:
		//visa
		break;

	case 3:
		//TODO
		break;

	}

	if (card_valid == true) {
		cout << "\nThe credit card number is valid. ";
	}

	else if (card_valid == false) {
		cout << "\nThe credit card number is not valid.";
	}

	else {
		cout << "\nError.";
		return 1;
	}

	return 0;
}
