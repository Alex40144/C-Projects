#include <stdio.h>
int p1[] = {5,5,5,5,5,5,5,5,5,5};
int p2[] = {8,8,8,8,8,8,8,8,8,8};
int c1[10],c2[10];


void crossover(int k) {
    for (int i = 0; i < k; i++) {
        c1[i] = p1[i];
        c2[i] = p2[i];
    }
    for (int i = k; i < 10; i++) {
        c1[i] = p2[i];
        c2[i] = p1[i];
    }
}

int main(void) {
    int k;
    printf("enter k: ");
    scanf("%d", &k);
    crossover(k);
    for (int i = 0; i < 10; i++) {
        printf("%d, %d\n", c1[i], c2[i]);
    }
}