#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    //get max random number
    int max;
    int num[20];
    printf("Enter values into array");

    //put random value into array at every position
    for(int i = 0; i < 20; i++) {
        scanf("%d", &num[i]);
        getchar();
    }

    int search;

    printf("Enter value to search for: ");
    scanf("%d", &search);
    getchar();

    int count = 0;

    for(int i = 0; i < 20; i++) {
        if(num[i] == search) {
            count += 1;
        }
    }

    printf("Found %d instances of %d", count, search);

    return 0;
}