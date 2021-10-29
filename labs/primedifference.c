#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int one, two;
    printf("enter two values: ");
    scanf("%d", &one);
    getchar();
    scanf("%d", &two);
    getchar();

    //calculate difference
    int difference = one - two;

    //if difference is negative, invert it.
    if (difference < 0) {
        difference = -difference;
    }

    //set prime to true
    int prime = 1;
    for(int i = 2; i < difference; i++) {
        if (difference % i == 0){
            //if prime is divisable evenly by a number, set prime to false
            prime = 0;
        }
    }

    //output based on prime
    if (prime == 1) {
        printf("difference is prime");
    } else {
        printf("differece is not prime");
    }
    return 0;
}