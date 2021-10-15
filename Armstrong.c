#include <stdio.h>
#include <math.h>
 
int main(void) {
    for(int i = 0; i <10000; i ++){
        int array[100] = {0};
        int j = 0;
        int temp = i;
        int length = 0;
        while(temp) {
            array[j++] = temp % 10; //get units
            temp /= 10; //knock of units
            length += 1;
        }
        int sum = 0;
        for(int k = 0; k < 100; k++) {
            sum += pow(array[k], length);
        }
        //printf("sum: %d, i: %d\n", sum, i);
        if(sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}