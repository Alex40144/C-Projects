#include <stdio.h>
 
int main(void) {
    float F; //store the Fahernehit value
    printf("Please enter a temperature in Fahrenheit: ");
    scanf("%f", &F); //read value from console and store in F var
    float C; //store celcius value
    C = (F - 32.0) * (5.0 / 9.0); //convert F to C
    printf("Temperature in Celcius: %.2f", C);  //print celcius value to console
 
    return 0;
}