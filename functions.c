#include <stdio.h>

void printNumber(int number) {
    printf("%d", number);

}

float PoundToEuro (float pound) {
    float euro = pound * 1.19;
    return euro;
}

float EurotoPound (float euro) {
    float pound = euro * 0.84;
    return pound;
}