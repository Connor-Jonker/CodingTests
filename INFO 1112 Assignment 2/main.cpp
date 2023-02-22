//==========================================================
//
// File: INFO 1112 Assignment 2.cpp INFO 1112 Assignment 2
//
// Author: Connor Jonker Email: connor.jonker@email.kpu.ca
//
// Student id: 100374615
//
// Course: INFO 1112 S11
//
//
//==========================================================
// Purpose: This program asks the user to guess a number between 1 and 100 and gives them hints if they are too high or too low until the user guesses the number
//
//==========================================================

#include "pch.h"
#include <iostream>

using namespace std;
int get_Number();
int number2();
int check_Guess(int num, int num2);


int main()
{
	int num, num2, check;
	num = get_Number();
	num2 = number2();
	check = check_Guess(num, num2);
	return 0;
}

	