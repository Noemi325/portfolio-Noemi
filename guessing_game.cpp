#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int targetNumber = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Start guessing:\n";

    while (guess != targetNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < targetNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "\nCongratulations! You guessed the number!\n";
            cout << "The number was " << targetNumber << ".\n";
            cout << "You made " << attempts << " attempts.\n";
        }
    }

    return 0;
}
