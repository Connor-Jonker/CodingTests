#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Please enter a number between 1 and 100\n";

    do {
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high\n";

        else if (guess < num)
            cout << "Too low\n";

        else
            cout << "You got it correct in " << tries << " guesses!\n";
    } while (guess != num);
    return 0;
}