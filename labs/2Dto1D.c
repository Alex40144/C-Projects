#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int two[2][3];
    int one[6];
    printf("Enter values into array:\n");

    //put value into array at every position
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &  two[i][j]);
            getchar();
        }
        
    }

    //loop through whole array, transfering value into one
    int k = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            one[k] = two[i][j];
            k++;
        }
        
    }

    //print array
    for(int i = 0; i < 6; i++) {
        printf("%d ", one[i]);
    }
    
    return 0;
}