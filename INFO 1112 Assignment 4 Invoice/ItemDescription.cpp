#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string * description(int choice)
{
	static string desc[4];
	switch (choice) {
	case 1:
		cout << "Enter the name of your item: ";
		getline(cin.ignore(), desc[0]);
		cout << endl;
		return desc;
		break;

	case 2:
		cout << "Enter the name of your first item: ";
		getline(cin.ignore(), desc[0]);
		cout << "Enter the name of your second item: ";
		getline(cin, desc[1]);
		cout << endl;
		return desc;
		break;

	case 3:
		cout << "Enter the name of your first item: ";
		getline(cin.ignore(), desc[0]);
		cout << "Enter the name of your second item: ";
		getline(cin, desc[1]);
		cout << "Enter the name of your third item: ";
		getline(cin, desc[2]);
		cout << endl;
		return desc;
		break;

	case 4:
		cout << "Enter the name of your first item: ";
		getline(cin.ignore(), desc[0]);
		cout << "Enter the name of your second item: ";
		getline(cin, desc[1]);
		cout << "Enter the name of your third item: ";
		getline(cin, desc[2]);
		cout << "Enter the name of your forth item: ";
		getline(cin, desc[3]);
		cout << endl;
		return desc;
		break;


	default: break;
	}
	return desc;
}