#include <stdio.h> 
#include <stdlib.h> 
int x1 = 10, x2 = 20, x3; 
int *ptr1, *ptr2, *ptr3; 

int main(int argc, char *argv[]) { 
    printf("Addresses of x1, x2, x3: %p %p %p\n\n",&x1,&x2,&x3); 
    printf("Press <CR> to continue. ..... "); 
    getchar(); 
    printf("Value of uninitialised ptr1: %p\n\n",ptr1); 
    printf("Press <CR> to continue. ..... "); 
    getchar();
    
    ptr1 = &x1; 
    printf("New value of ptr1: %p\n\n",ptr1); 
    printf("Press <CR> to continue. ..... "); 
    getchar(); 
    ptr2 = ptr1; 
    printf("Value of variable pointed to by ptr2 = %d\n\n",*ptr2); 

    *ptr3 = 99; 

    ptr2 = &x2; 
    ptr3 = &x3; 
    *ptr3 = *ptr1 + *ptr2; 
    printf("New value of x3 = %d\n\n",x3); 
    system("PAUSE"); 
    return 0; 
} 