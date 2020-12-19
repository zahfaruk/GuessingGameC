#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Guessing game
    int num=10, guess, attempts=3;
    while(guess!=num) {
    printf("Guess a number: ");
    scanf("%d", &guess);
        if(guess == num-1 || guess == num+1) {
            printf("You're close!\n");
            printf("Attempts left: %d\n", attempts-1);
        }
        else if(guess!=num) {
            printf("Not quite there yet.\n");
            printf("Attempts left: %d\n", attempts-1);
        }
        attempts--;
    }
    if(guess==num) {
    printf("Your guess is correct! You won!\n");
    }
    else {
        printf("You ran out of attempts. Better luck next time!");
    }
    return 0;
}
