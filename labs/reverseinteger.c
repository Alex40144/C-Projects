#include <stdio.h>
#include <string.h>
 
int main(void) {
    char number[10];
    printf("Please enter a number: ");
    scanf("%s", &number); //save integer from console as a string
    printf("\nNumber reversed: ");
    for (int x = strlen(number); x > -1; x--) { //loop through array backwards
        printf("%c", number[x]); //print char to console
    }
    return 0;
}