#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int num[2][3];
    printf("Enter values into array:\n");

    //put value into array at every position
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &num[i][j]);
            getchar();
        }
        
    }

    //loop through whole array
    int min, max = num[0][0];
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            if(num[i][j] > max) {
                max = num[i][j];
            }
            if (num[i][j] < min) {
                min = num[i][j];
            }
            sum += num[i][j];
        }
        
    }
    printf("sum: %d\n", sum);

    float average = (float)sum / (float)6;

    printf("min: %d\nmax: %d\naverage: %d", min, max, average);

    
    return 0;
}