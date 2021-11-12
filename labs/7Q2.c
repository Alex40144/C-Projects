#include <stdio.h>


struct fraction
{
    int numerator, denominator;
};

//https://www.freecodecamp.org/news/euclidian-gcd-algorithm-greatest-common-divisor/
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int simplify(int *numerator, int *denominator) {
    int divisor = gcd(*numerator, *denominator);

    *numerator = *numerator / divisor;
    *denominator = *denominator / divisor;
    return 1;
}

int unify(int *n1, int *d1, int *n2, int *d2) {
    *n1 = *n1 * *d2;
    *n2 = *n2 * *d1;
    *d1 = *d1 * *d2;
    *d2 = *d1;
    return 1;
}

int add(int *n1, int *d1, int *n2, int *d2, int *resn, int *resd) {
    *resn = *n1 + *n2;
    *resd = *d1;
    return 1;
}

int subtract(int *n1, int *d1, int *n2, int *d2, int *resn, int *resd) {
    *resn = *n1 - *n2;
    *resd = *d1;
    return 1;
}

int multiply(int *n1, int *d1, int *n2, int *d2, int *resn, int *resd) {
    *resn = *n1 * *n2;
    *resd = *d1 * *d2;

    return 1;
}

int divide(int *n1, int *d1, int *n2, int *d2, int *resn, int *resd) {
    *resn = *n1 * *d2;
    *resd = *d1 * *n2;

    return 1;
}

int main() {
    struct fraction f1, f2, res;

    printf("enter numerator of first fraction: ");
    scanf("%d", &f1.numerator);
    printf("enter denominator of first fraction: ");
    scanf("%d", &f1.denominator);
    printf("enter numerator of second fraction: ");
    scanf("%d", &f2.numerator);
    printf("enter denominator of second fraction: ");
    scanf("%d", &f2.denominator);

    unify(&f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator);

    add(&f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator, &res.numerator, &res.denominator);
    simplify(&res.numerator, &res.denominator);
    printf("Added:\n%d/%d\n", res.numerator, res.denominator);

    subtract(&f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator, &res.numerator, &res.denominator);
    simplify(&res.numerator, &res.denominator);
    printf("Subtracted:\n%d/%d\n", res.numerator, res.denominator);

    multiply(&f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator, &res.numerator, &res.denominator);
    simplify(&res.numerator, &res.denominator);
    printf("Multiplied:\n%d/%d\n", res.numerator, res.denominator);

    divide(&f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator, &res.numerator, &res.denominator);
    simplify(&res.numerator, &res.denominator);
    printf("Divided:\n%d/%d\n", res.numerator, res.denominator);



    return 1;
}