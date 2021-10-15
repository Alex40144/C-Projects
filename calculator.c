#include <stdio.h> 
#include <math.h>
 
int main(void) {
    int num1;
    int num2;
    char op;

    //get commands
    printf("enter first number: ");
    scanf("%d", &num1);
    getchar();
    printf("enter op: ");
    scanf("%c", &op);
    printf("enter second number: ");
    scanf("%d", &num2);

    //do commands
    switch (op)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    case '%':
        printf("%d", num1 % num2);
        break;
    case '^':
        printf("%d", pow(num1, num2));
        break;
    default:
        printf("invalid operation");
        break;
    }
    return 0;
}