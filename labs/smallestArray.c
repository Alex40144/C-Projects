#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    //get max random number
    int max;
    printf("Enter maximum random value");
    scanf("%d", &max);
    int num[20];

    //put random value into array at every position
    for(int i = 0; i < 20; i++) {
        num[i] = rand() % max;
    }

    //define min
    int min = num[0];

    //find min value
    for(int i = 0; i < 4; i++) {
        if (num[i] < min){
            min = num[i];
        }
    }
    //output min
    printf("min: %d", min);

    return 0;
}