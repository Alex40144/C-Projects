#include <stdio.h> 
 
int main(void) {
    //get 4 numbers and put them in an array
    int num[4];
    for(int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    int sorted = 0;
    while (sorted == 0) {
        int changed = 0;
        for(int i = 0; i < 3; i++) {
            //if first value is greater than second swap values around
            if( num[i] > num [i+1]) {
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
                changed = 1;
            }
        }
        if (changed == 0){
            sorted = 1;
        }
    }
    printf("Ordered values: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}