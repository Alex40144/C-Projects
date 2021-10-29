#include <stdio.h> 
 
int main(void) {
    printf("enter a number\n");
    int num;
    scanf("%d", &num);

    if(num >= 0) { //compare to 0
        printf("Positive\n");
    } else {
        printf("Negative\n");
    }
    if(num % 2 == 0) { //if divisible by 2 is even
        printf ("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}