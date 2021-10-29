#include <stdio.h> 
#include <stdlib.h> 
 
int main(void) {
    float a;
    float b;
    printf("enter int a: ");
    scanf("%f", &a); //read value into int a
    printf("enter int b: ");
    scanf("%f", &b); //read value into int b
 
    a = a*b; //a is now product of a and b
    b = a/b; // b is now what a was
    a = a / b; // a is now what b was
 
    //print both to console
    printf("\na is %f", a);
    printf("\nb is %f", b);
 
    return 0;
}
