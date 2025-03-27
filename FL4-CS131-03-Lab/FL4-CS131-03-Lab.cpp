#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    // Self-explanatory variables, guess will be initialized by user input
    int numToGuess, guess;
    // Sets up random generation based on time of program
    srand(time(NULL));
    // Initializes numToGuess with a random number
    numToGuess = rand() % 10 + 1;
    // Flavor program intro text, separated into two lines for legibility
    cout << "This is a number-guessing game; I think of a number ranging from 1-10 inclusive,"
        " and you have 3 tries to guess it.\n\n";
    // For loop that gives the user a set number of guesses and prompts input (semantic saturation is kicking in at this point)
    for (int guesses = 3; guesses > 0; guesses--) {
        // Prompt
        cout << "Enter a guess: ";
        // Recieve
        cin >> guess;
        // Compare user input to correct answer; if it's correct, end the program
        if (guess == numToGuess) {
            cout << "\nCorrect! You win!\n\n";
            system("pause");
            return 0;
        }
        // If guess is greater than or less than the correct answer, communicate that
        else if (guess > numToGuess) {
            cout << "Too high.\n";
        }
        else if (guess < numToGuess) {
            cout << "Too low.\n";
        }
    }
    // Game end message when guesses run out
    cout << "\nYou've run out of guesses. Game over.\n\n";
    system("pause");
    return 0;
}