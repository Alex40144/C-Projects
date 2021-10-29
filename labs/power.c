#include <stdio.h>

float power(float f, int n) {
    printf("%p\n", &n);
    if (n==0) return 1;
    else return (f*power(f,n-1));
}

int main(void) {
    printf("%d", power(2,-4));
}
