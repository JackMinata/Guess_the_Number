#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_comment(int difference) {
    if (difference >= 50) {
        printf("Wow, not even close!\n");
    } else if (difference >= 30) {
        printf("You might want to try a bit harder.\n");
    } else if (difference >= 15) {
        printf("Getting warmer, but still off.\n");
    } else if (difference >= 5) {
        printf("Close, but no cigar.\n");
    } else if (difference >= 1) {
        printf("Almost there!\n");
    }
}

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int number_to_guess = (rand() % 100) + 1;

    int user_guess;
    int attempts = 0;

    printf("I've chosen a number between 1 and 100. Try to guess it!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        attempts++;

        if (user_guess == number_to_guess) {
            printf("Congratulations, you've found the number in %d attempts!\n", attempts);
            break;
        } else {
            print_comment(abs(user_guess - number_to_guess));
        }
    }

    return 0;
}
