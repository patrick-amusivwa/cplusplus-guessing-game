#include <iostream>
using namespace std;
int main()
{
    int secretnumber = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 5;
    bool outofguesses = false;

    while (secretnumber != guess && !outofguesses)
    {
        if(guesscount<guesslimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guesscount++;
        }
        else
        {
            outofguesses = true;
            break;
        }
        

    }
    if (outofguesses)
    {
        cout << "You ran out of guesses !";
    }
    else
    {
        cout << "You win!";
    }
   


return 0;
}