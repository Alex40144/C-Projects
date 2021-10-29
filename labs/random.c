#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int high;
    printf("please enter the upper range limit: ");
    scanf("%d", &high); //read maximum value from console and save in high var
    int random = rand() % high; // rand returns values between 0 and at least 32767.
    //remainder of rand / high value is saved as our random value.
    printf("%d", random);
    return 0;
}
