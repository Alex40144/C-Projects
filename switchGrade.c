#include <stdio.h> 
 
int main(void) {
    int grade;
    char gradeLetter;

    printf("please enter grade: ");
    scanf("%d", &grade);

    //divide by 10 knocks last digit off.
    switch (grade / 10)
    {
    case 10:
        gradeLetter = 'A';
        break;
    case 9:
        gradeLetter = 'A';
        break;
    case 8:
        gradeLetter = 'B';
        break;
    case 7:
        gradeLetter = 'C';
        break;
    case 6:
        gradeLetter = 'D';
        break;
    default:
        gradeLetter = 'F';
        break;
    }

    printf("Grade Letter: %c", gradeLetter);
}