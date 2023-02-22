#include "pch.h"
#include <iostream>
using namespace std;

int check_Guess(int num, int num2)
{
	do
	{
		int get_Number();

		if (num < num2)
		{
			cout << "Too low, enter a different number: ";
			cin >> num;
		}
		else if (num > num2)
		{
			cout << "Too high, enter a different number: ";
			cin >> num;
		}
	}
		while (num != num2);
	cout << "Congratulations, You Figured Out My Number." << endl;

	return 0;
}
