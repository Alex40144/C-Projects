#include <stdio.h>
 
int main(void) {
    float R;
    printf("Please enter the Radius: ");
    scanf("%f", &R); //read float into R value
    float P;
    P = 3.1415926 * 2 * R; //calculate perimeter
    printf("Perimeter: %.2f", P); //print perimeter to console
    float A;
    A = 3.1415926 * R * R; //calculate area
    printf("\nArea: %.2f", A); //print area to console
    return 0;
}
