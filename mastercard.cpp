#include "mastercard.h"
#include "glodec.h"
#include "conarray.h"


bool luhn_test(int card_number)//verify mastercard
{
	int s1;
	int s2;
	int s3;
	std::vector<int> card_vector;
	std::vector<int> card_reverse;
	std::vector<int> even_digits;

	
	conarray::conarray(13, card_number, card_vector, card_reverse);

	for (int i = 0; i < card_reverse.max_size; i = i + 2) { //getting sum of all the odd digits
		s1 += card_reverse.at(i);
	}

	even_digits.resize(card_vector.size / 2);

	for (int i = 1; i < card_reverse.size; i=+2) { //doubling the even digits
		int n = 0; //this is the position for the vector
		even_digits.at(n) = (card_reverse.at(i) * 2);
	}

	for (int i = even_digits.size; i >= 0; i++) {
		s2 += even_digits.at(i);
	}

	s3 = s1 + s2;

	if (s3 % 10 == 0) {
		return true;
	}

	else {
		return false;
	}
	
}


