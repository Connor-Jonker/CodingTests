#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

float * cost(int choice)
{
	static float price[4];
	switch (choice) {
	case 1:
		cout << "Enter the price of your first item: ";
		cin.ignore() >> price[0];
		cout << endl;
		return price;
		break;
	case 2:
		cout << "Enter the price of your first item: ";
		cin.ignore() >> price[0];
		cout << "Enter the price of your second item: ";
		cin >> price[1];
		cout << endl;
		return price;
		break;
	case 3:
		cout << "Enter the price of your first item: ";
		cin.ignore() >> price[0];
		cout << "Enter the price of your second item: ";
		cin >> price[1];
		cout << "Enter the price of your third item: ";
		cin >> price[2];
		cout << endl;
		return price;
		break;
	case 4:
		cout << "Enter the price of your first item: ";
		cin.ignore() >> price[0];
		cout << "Enter the price of your second item: ";
		cin >> price[1];
		cout << "Enter the price of your third item: ";
		cin >> price[2];
		cout << "Enter the price of your forth item: ";
		cin >> price[3];
		cout << endl;
		return price;
		break;
	}

return price;
}