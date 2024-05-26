#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int numberToGuess = rand() % 100 + 1;
    int guess = 0;
    int maxAttempts = 10;
    int attempts = 0;

    cout << endl << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess the correct number. Good luck!" << endl;

    while (attempts < maxAttempts)
    {
        cout << "Attempt " << attempts + 1 << " - Enter your guess : ";
        cin >> guess;
        attempts++;

        if (guess < numberToGuess)
        {
            cout << endl << "Too low! Try again." << endl;
        }
        else if (guess > numberToGuess)
        {
            cout << endl << "Too high! Try again." << endl;
        }
        else
        {
            cout << endl << "Congratulations! You guessed the correct number " << numberToGuess << " in " << attempts << " attempts." << endl;
            break;
        }

        if (attempts == maxAttempts)
        {
            cout << endl << "Sorry, you've used all your attempts. The correct number was : " << numberToGuess << endl;
        }
    }

    return 0;
}