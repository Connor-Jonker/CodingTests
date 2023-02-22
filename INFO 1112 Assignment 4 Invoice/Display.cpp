#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float * cost(int choice);
int * quantity(int choice);
string * description(int choice);
int choice();
int selection;

void display(int choice)
{
	switch (choice) {
	case 1:
		cout << left << setw(30) << "Description" << left << setw(30) << "Quantity" << left << setw(30) << "Cost" << endl << endl;
		cout << left << setw(30) << description(selection)[0] << left << setw(30) << quantity(selection)[0] << left << setw(30) << fixed << setprecision(2) << cost(selection)[0] << endl;
		break;

	case 2:
		cout << left << setw(30) << "Description" << left << setw(30) << "Quantity" << left << setw(30) << "Cost" << endl << endl;
		cout << left << setw(30) << description(selection)[0] << left << setw(30) << quantity(selection)[0] << left << setw(30) << fixed << setprecision(2) << cost(selection)[0] << endl;
		cout << left << setw(30) << description(selection)[1] << left << setw(30) << quantity(selection)[1] << left << setw(30) << fixed << setprecision(2) << cost(selection)[1] << endl;
		break;

	case 3:
		cout << left << setw(30) << "Description" << left << setw(30) << "Quantity" << left << setw(30) << "Cost" << endl << endl;
		cout << left << setw(30) << description(selection)[0] << left << setw(30) << quantity(selection)[0] << left << setw(30) << fixed << setprecision(2) << cost(selection)[0] << endl;
		cout << left << setw(30) << description(selection)[1] << left << setw(30) << quantity(selection)[1] << left << setw(30) << fixed << setprecision(2) << cost(selection)[1] << endl;
		cout << left << setw(30) << description(selection)[2] << left << setw(30) << quantity(selection)[2] << left << setw(30) << fixed << setprecision(2) << cost(selection)[2] << endl;
		break;

	case 4:
		cout << left << setw(30) << "Description" << left << setw(30) << "Quantity" << left << setw(30) << "Cost" << endl << endl;
		cout << left << setw(30) << description(selection)[0] << left << setw(30) << quantity(selection)[0] << left << setw(30) << fixed << setprecision(2) << cost(selection)[0] << endl;
		cout << left << setw(30) << description(selection)[1] << left << setw(30) << quantity(selection)[1] << left << setw(30) << fixed << setprecision(2) << cost(selection)[1] << endl;
		cout << left << setw(30) << description(selection)[2] << left << setw(30) << quantity(selection)[2] << left << setw(30) << fixed << setprecision(2) << cost(selection)[2] << endl;
		cout << left << setw(30) << description(selection)[3] << left << setw(30) << quantity(selection)[3] << left << setw(30) << fixed << setprecision(2) << cost(selection)[3] << endl;
		break;
	}
}