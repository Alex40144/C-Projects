#include <stdio.h>
#include <math.h>

int factorial(int num);

int main(void){
    int number;
    printf("enter number: ");
    scanf("%d", &number);

    printf("%d", factorial(number));
}

int factorial(int num) {
    int total= 1;
    for (int i = 1; i < num; i++) {
        total = total * i;
    }
    return total;
}