#include <stdio.h> 
#include <stdlib.h> 
void foo1(int xval) { 
    int x; 
    x = xval; 
    /* print the address of x here – “The address of x is ..” */
    printf("address of x: %p\n", &x);
} 
void foo2(int yval) { 
    int y; 
    y = yval; 
    /* print the address of y here – “The address of y is..” */ 
    printf("address of y: %p\n", &y);
} 

void foo3(void) { 
    int z; 
    foo1(z); 
} 

int main(void) 
{ 
foo1(7); 
foo2(11); 
foo3();
system("PAUSE"); 
return 0; 
} 