#include "Production.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Production p;
	vector<int> m_numbers;
	bool checkPassed = false;

	while (!checkPassed) {

		m_numbers.clear();
		cout << "Enter 6 numbers each between 1 and 46" << endl;

		for (int i = 0; i < 6; i++) { // get 6 number from input
			int input;
			cout << 6 - i << " number left" << endl;

			std::cin >> input;

			m_numbers.push_back(input);
		}

		checkPassed = p.inputCheck(m_numbers);
	}

	cout << "you have 6 numbers between 1 to 46" << endl;
	system("PAUSE");
	//p.someMethod(10);
	return 0;
}
