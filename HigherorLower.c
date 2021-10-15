#include <stdio.h> 
#include <stdlib.h>
 
int main(void) {
    int target = rand() % 100;
    int found = 0;
    int guess;

    printf("I'm thinking of a number between 0 and 100\n");

    while (found == 0) {
        scanf("%d", &guess);
        if(guess == target) {
            printf("Congratulations you guessed it");
            found = 1;
        } else if (guess > target) {
            printf("Too high\n");
        } else if (guess < target) {
            printf("Too low\n");
        }

    }
}