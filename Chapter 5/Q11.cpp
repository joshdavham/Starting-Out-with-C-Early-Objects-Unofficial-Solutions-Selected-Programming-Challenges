#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        int guess,
            randNum,
            numGuesses;

        //This makes sure I get different random numbers every time I run the program.
        unsigned seed;
        seed = time(0);
        srand(seed);

        randNum = 1 + rand() % 99;

        cout << "\nI'm thinking of a number between 1 and 100. Guess? ";
        cin >> guess;

        numGuesses = 1;
        while(guess != randNum)
        {
                cout << "\n";
                if(guess < randNum)
                {
                        cout << "Too low, guess again: ";
                }
                else//guess > randNum
                {
                        cout << "Too high, guess again: ";
                }
                cin >> guess;
                numGuesses++;
        }

        //When the user gets past the loop he/she wins.
        cout << "\n\nCongratulations! You figured out my number in " << numGuesses << " guesses.\n";


        return 0;
}
