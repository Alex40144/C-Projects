#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int one[2][3];
    int two[2][3];
    printf("Enter values into first array:\n");

    //put value into array at every position
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &one[i][j]);
            getchar();
        }
    }
    printf("Enter values into second array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &two[i][j]);
            getchar();
        }
    }

    //loop through whole array, transfering value into one
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            int temp = two[i][j];
            two[i][j] = one[i][j];
            one[i][j] = temp;
            
        }
        
    }

    //print array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            printf("%d ", one[i][j]);
            
        }
        
    }
    printf("\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            printf("%d ", two[i][j]);
            
        }
        
    }
    
    return 0;
}