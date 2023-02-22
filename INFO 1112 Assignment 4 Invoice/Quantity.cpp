#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int * quantity(int choice)
{
	static int amount[4];
	switch (choice) {
	case 1:
		cout << "Enter the quantity of the item you want to buy: ";
		cin >> amount[0];
		cout << endl;
		return amount;
		break;

	case 2:
		cout << "Enter the quantity of your first item you want to buy: ";
		cin >> amount[0];
		cout << "Enter the quantity of your second item you want to buy: ";
		cin >> amount[1];
		cout << endl;
		return amount;
		break;

	case 3:
		cout << "Enter the quantity of your first item you want to buy: ";
		cin >> amount[0];
		cout << "Enter the quantity of your second item you want to buy: ";
		cin >> amount[1];
		cout << "Enter the quantity of your third item you want to buy: ";
		cin >> amount[2];
		cout << endl;
		return amount;
		break;

	case 4:
		cout << "Enter the quantity of your first item you want to buy: ";
		cin >> amount[0];
		cout << "Enter the quantity of your second item you want to buy: ";
		cin >> amount[1];
		cout << "Enter the quantityt of your third item you want to buy: ";
		cin >> amount[2];
		cout << "Enter the quantity of your forth item you want to buy: ";
		cin >> amount[3];
		cout << endl;
		return amount;
		break;

	default: break;
	}
	return amount;
}