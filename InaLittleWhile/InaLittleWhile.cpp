#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Part 1: Number Guessing Game
    srand(time(0));  // Seed the random number generator
    int secretNumber = rand() % 10 + 1;  // Generate random number between 1 and 10
    int guess;

    cout << "Guess the number (between 1 and 10): ";
    cin >> guess;

    // Loop until the user guesses the correct number
    while (guess != secretNumber) {
        if (guess < secretNumber) {
            cout << "Too low. Try again: ";
        }
        else {
            cout << "Too high. Try again: ";
        }
        cin >> guess;
    }

    cout << "Correct! The number was " << secretNumber << "." << endl;

    // Part 2: Secret Password Prompt
    string correctPassword = "C++Rocks";  // Secret password
    string enteredPassword;

    cout << "Enter the secret password: ";
    cin >> enteredPassword;

    // Keep asking until the correct password is entered
    while (enteredPassword != correctPassword) {
        cout << "Incorrect. Try again: ";
        cin >> enteredPassword;
    }

    cout << "Access Granted!" << endl;

    return 0;
}
