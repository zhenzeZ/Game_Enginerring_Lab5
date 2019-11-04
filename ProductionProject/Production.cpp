#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
}

bool Production::inputCheck(vector<int> numbers) {

	int counter = 0;	// check for 6 number

	for (auto number : numbers) {
		counter++;

		if (number < 1 || number > 46) { // check the number between 1 and 46
			cout << "NO." <<  counter + 1 << " is not between 1 and 46 " << endl;
			return false;
		}
	}

	if (counter != 6) {
		cout << "the numbers is not 6"<< endl;
		return false;
	}

	for (int i = 0; i < counter; i++) { // check no numbers are repeated
		for (int x = i + 1; x < counter; x++) {
			if (numbers[i] == numbers[x]) {
				cout << "you have recurring number: " << numbers[i] << endl;
				return false;
			}
		}
	}


	return true;
}