#include <stdio.h>
 
int main(void) {
    char hex;
    printf("enter single digit hex value: ");
    hex = getchar();
    printf("\n");
    switch(hex){
    case 'A':
        printf("10");
        break;
    case 'B':
        printf("11");
        break;
    case 'C':
        printf("12");
        break;
    case 'D':
        printf("13");
        break;
    case 'E':
        printf("14");
        break;
    case 'F':
        printf("15");
        break;
    default:
        printf("%c", hex);
    }



}
