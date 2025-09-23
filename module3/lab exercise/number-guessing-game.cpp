#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));              // Seed random number
    int secret = rand() % 100 + 1;  // Random number between 1 and 100
    int guess = 0;

    cout << "Guess a number between 1 and 100:" << endl;

    while (guess != secret) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Correct! You guessed the number." << endl;
        }
    }

    return 0;
}

