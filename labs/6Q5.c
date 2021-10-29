#include <stdio.h> 
#include <stdlib.h> 

int arr1[] = {0,1,2,3,4,5,6,7,8,9};
int arr2[] = {9,8,7,6,5,4,3,2,1,0};
int arr3[10];

int dotProduct(int *arr1, int *arr2, int *arr3){
    for (int i = 0; i < 10; i++) {
        *(arr3+i) = *(arr1+i) * *(arr2+i);
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += *(arr3+i);
    }
    return sum;
}

int main(void) {
    printf("%d", dotProduct(&arr1[0], &arr2[0], &arr3[0]));

}