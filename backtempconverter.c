#include <stdio.h>
 
int main(void) {
    float F;
    printf("Please enter a temperature in Fahrenheit: ");
    scanf("%f", &F);
    float C;
    C = (F - 32.0) * (5.0 / 9.0);
    printf("Temperature in Celcius: %.2f", C);
 
    return 0;
}