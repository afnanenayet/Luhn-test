#include "conarray.h"
#include "glodec.h"


conarray::conarray(int card_length, int card_number, std::vector<int> &card_vector, std::vector<int> &card_reverse)
{
	card_vector.resize(card_length);
	card_reverse.resize(card_length);

	for (int i = card_length; i >= 0; i--) { //converting from int to array
		card_vector.at(i) = card_number % 10;
		card_number /= 10;
	}

	for (int i = card_length; i >= 0; i--) { //reversing array
		card_reverse.at(card_length - i) = card_vector.at(card_length);
	}

	//pass vectors by reference, no need to return
}

