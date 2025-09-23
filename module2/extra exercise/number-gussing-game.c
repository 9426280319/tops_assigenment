#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    // Seed random number generator
    srand(time(0));
    number = (rand() % 10) + 1; // Random number between 1 and 100

    printf("?? Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 10.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
            break;
        } 
        else if (guess > number) {
            printf("Too high! Try again.\n");
        } 
        else {
            printf("Too low! Try again.\n");
        }
    }

    if (attempts == maxAttempts && guess != number) {
        printf("\n? Sorry, you've used all attempts. The number was %d.\n", number);
    }
}

