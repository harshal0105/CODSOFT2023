#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int Guessnum;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> Guessnum;
        attempts++;

        if (Guessnum < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (Guessnum > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
        }
    } while (Guessnum!=secretNumber);

    return 0;
}
