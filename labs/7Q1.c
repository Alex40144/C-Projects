#include <stdio.h>

struct numbers
{
    double real, imaginary;
};

int main() {
    struct numbers c1, c2, c3;

    c1.real = 0.0;
    c1.imaginary = 1.0;

    c2.real = 1.0;
    c2.imaginary = 0.0;
    c1 = c2;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    printf("%f %f %f %f %f %f ", c1.real, c1.imaginary, c2.real, c2.imaginary, c3.real, c3.imaginary);

    return 1;
}