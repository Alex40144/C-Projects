#include <stdio.h> 
 
int main(void) {
    //get 4 numbers and put them in an array
    int num[4];
    for(int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }

    //define min and max
    int max = num[0];
    int min = num[0];

    //find max value
    for(int i = 0; i < 4; i++) {
        if (num[i] > max){
            max = num[i];
        }
    }

    //find min value
    for(int i = 0; i < 4; i++) {
        if (num[i] < min){
            min = num[i];
        }
    }
    //output min and max
    printf("max: %d \nmin: %d", max, min);

    return 0;
}