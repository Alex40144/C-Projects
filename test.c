#include <stdio.h>

int pb(int n) {
    if (n==0) 
        return 0;
    else 
        return (n % 2) + 10 * pb(n / 2);
}

int main(void) {
    printf("%d\n", pb(1));
    printf("%d\n", pb(2));
    printf("%d\n", pb(3));
    printf("%d\n", pb(4));
    printf("%d\n", pb(5));
}