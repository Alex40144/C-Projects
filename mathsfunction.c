#include <stdio.h> 
#include <math.h> 
 
 
int main(void) {
    float values[4]; //inputted values
    float results[4]; // calculated values
    float x;
    int counter = 0;
    
    //collect 4 values from the user
    while (counter < 4) {
        scanf("%f", &x);
        values[counter] = x;
        counter++;
    }
 
    printf("/****************************************************/\n");
    printf("%-25s%-20s%\n", "Value of x", "f(x)"); //print with nice spacing
    for (int i = 0; i < 4; i++) { //loop through inputted values
        float out = (2.0 * sin(3.1415926 * values[i])) + (3.0 * cos(3.1415926 * values[i])); //calculate
        printf("%-25f%-20f%\n", values[i], out); //print with nice formatting
    }
    printf("/****************************************************/\n");
    return 0;
}
