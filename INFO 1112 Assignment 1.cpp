#include <iostream>
#include <string>

using namespace std;
//string getfname;
//string getlname;
//string getemail;
//void Display(string fname, string lname, string email);//prototype 

int main()
{
	string adjective;
	cout << "Type in an adjective: ";
	cin >> adjective;
	string verb1;
	cout << "Type in a verb (past tense): ";
	cin >> verb1;
	string noun;
	cout << "Type in a noun: ";
	cin >> noun;

	cout << "The " << adjective << " professor " << verb1 << " my " << noun << ", and I've never recovered." <<endl;
	system("pause");
}

