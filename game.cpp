#include <iostream>
using namespace std;
int main()
{
    int secretnumber = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 5;
    bool outofguesses = false;

    while (secretnumber != guess)
    {
        cout << "Guess the number: ";
        cin >> guess;
        ++guesscount;

    }
    cout << "You win!";


return 0;
}