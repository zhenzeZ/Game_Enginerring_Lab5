#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	vector<int> numbers = { 0,1,2,3,4,5};

	/*for (int i = 0; i < 6; i++) {
		numbers.push_back(rand() / 47);
	}*/

	cout << p.inputCheck(numbers) << endl;
	assert(p.inputCheck(numbers) == true);
	cout << "the returning is not false" << endl;

	assert(p.inputCheck(numbers) == false);
	cout << "the returning is false" << endl;

	cin.get();
}