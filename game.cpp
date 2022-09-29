#include <iostream>
using namespace std;
int main()
{
    int secretnumber = 7;
    int guess;
    while (secretnumber != guess)
    {
        cout << "Guess the number: ";
        cin >> guess;
    }
    cout << "You win!";


return 0;
}