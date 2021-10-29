#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int a;
    int b;
    //record both ints to variables
    printf("enter int a: ");
    scanf("%d", &a);
    printf("enter int b: ");
    scanf("%d", &b);
 
    //swap variables with middle temp variable
    int temp = a;
    a = b;
    b = temp;
 
    //print to console.
    printf("\na is %d", a);
    printf("\nb is %d", b);
 
    return 0;
}
