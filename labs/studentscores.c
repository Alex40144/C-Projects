#include <stdio.h>
#include <string.h>
 
int main(void) {
    int ids[4]; //store student ids
    char names[4][15]; //store names in 2D array
    float marks[4]; //store marks
    float mark; //max mark
    int counter = 0;
 
    printf("Enter maximum mark available: ");
    scanf("%f", &mark);
 
    while (counter < 3) { //loop three times recording information from console
        printf("enter Student ID: ");
        scanf("%d", &ids[counter]);
        printf("Enter student name: ");
        scanf("%s", &names[counter]);
        printf("Enter student mark: ");
        scanf("%f", &marks[counter]);
        counter++;
    }
 
    printf("/***************************************************************************************/\n");
    printf("%-20s%-20s%-20s%-20s%\n", "Student Id", "name", "marks", "percentage"); //nice table formatting
    for (int i = 0; i < 3; i++) { //loop through the three students
        printf("%-20d%-20s%-20f%-20f%\n", ids[i], names[i], marks[i], marks[i] / mark *100); //print nicely to console
    }
    printf("/***************************************************************************************/\n");
    return 0;
}