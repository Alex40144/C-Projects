#include <stdio.h>
#include <math.h>

int factorial(int num) {
    int total= 1;
    for (int i = 1; i <= num; i++) {
        total = total * i;
    }
    return total;
}

float sine(float number ) {
    double sine = 0;
    int i = 1;
    while (1) {
        double res = pow(number, i) / factorial(i);

        if (res < 0.000001) {
            break;
        }

        if (i / 2 % 2 == 0) {
            sine += res;
        } else {
            sine -= res;
        }
        i = i + 2;
    }

    return sine;
}

float cosine(float number ) {
    double sine = 0;
    int i = 0;
    while (1) {
        double res = pow(number, i) / factorial(i);

        if (res < 0.000001) {
            break;
        }

        if (i / 2 % 2 == 0) {
            sine += res;
        } else {
            sine -= res;
        }
        i = i + 2;
    }

    return sine;
}

int main(void) {
    float number;
    printf("enter value: ");
    scanf("%f", &number);
    printf("Sine value: ");
    printf("%f", sine(number));
    printf("\nCosine value: ");
    printf("%f", cosine(number));
}