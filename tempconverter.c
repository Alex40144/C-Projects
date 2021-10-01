#include <stdio.h>
int main(void){
    float f, c;
    printf("Enter temperature in Fahernheit: ");
    scanf("%f", &f); // record F from console to F var
    c = (f-32.0) * (5.0/9.0); // calculate celcius value
    printf("Celcius: %.1f\n", c); // print C value to console.
    return 0;
}