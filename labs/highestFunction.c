#include <stdio.h>
#include <math.h>

float getLargest(int one, int two, int three);

int main(void){
    int one, two, three;

    printf("enter first: ");
    scanf("%d", &one);
    printf("enter second: ");
    scanf("%d", &two);
    printf("enter third: ");
    scanf("%d", &three);

    printf("%d", getLargest(one, two, three));
}

float getLargest(int one, int two, int three) {
    int largest = one;
    if (two > largest) {
        largest = two;
    }
    if(three > largest) {
        largest = three;
    }
    return largest;
}