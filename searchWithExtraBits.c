#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    //get max random number
    float max;
    float min;
    float num[20];
    printf("Enter values into array");

    //put random value into array at every position
    for(int i = 0; i < 20; i++) {
        scanf("%d", &num[i]);
        getchar();
    }

    printf("Enter lower value for search range: ");
    scanf("%d", &min);
    getchar();

    printf("Enter upper value for search range: ");
    scanf("%d", &max);
    getchar();

    float sum = 0;

    for(int i = 0; i < 20; i++) {
        if(num[i] > min && num[i] < max) {
            sum += num[i];
        }
    }

    printf("Sum of values between search terms: %d", sum);

    return 0;
}