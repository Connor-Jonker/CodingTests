//==========================================================
//
// File: INFO 1112 Assignment 4 Invoice.cpp 
//
// Author: Connor Jonker Email: Your connor.jonker@email.kpu.ca
//
// Student id: 100374615
//
// Course: INFO 1112 S11 Date: November 18, 2019
//
//
//==========================================================
// Purpose: This program asks the user to enter the description, quantity and price of up to 4 items 
//
//==========================================================

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void Display_Menu();
int choice();
void display(int choice);
float * cost(int choice);
int * quantity(int choice);
string * description(int choice);

int main()
{
	Display_Menu();
	int selection = choice();
	description(selection);
	quantity(selection);
	cost(selection);
	display(selection);

	system("pause");
	return (0);
}

