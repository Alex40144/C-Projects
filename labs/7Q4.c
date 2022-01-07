#include <stdio.h>

struct Person_Name {
    char first_name[20];
    char second_name[20];
    char initial;
};

struct Student
{
    struct Person_Name name;
    int id_number;
    int age;
    char sex;
};

int readIn( struct Student *Student) {
    printf("name: ");
    scanf("%s", Student->name.first_name);
    printf("second name: ");
    scanf("%s", Student->name.second_name);
    Student->name.initial = Student->name.first_name[0];
    printf("age: ");
    scanf("%d", &Student->age);
    getchar();
    printf("sex: ");
    scanf("%c", &Student->sex);
    printf("id: ");
    scanf("%d", &Student->id_number);
    return 0;
}

int readOut( struct Student Student) {
    printf("name: %s\n", Student.name.first_name);
    printf("second name: %s\n", Student.name.second_name);
    printf("initial: %c\n", Student.name.initial);
    printf("age: %d\n", Student.age);
    printf("sex: %c\n", Student.sex);
    printf("id: %d\n", Student.id_number);
    return 0;
}

int printAll (struct Student students[3]) {
        printf("/***************************************************************************************/\n");
    printf("%-20s%-20s%-20s%-20s%-20s%-20s\n", "Student Id", "first name", "second name", "initial", "age", "sex"); //nice table formatting
    for (int i = 0; i < 3; i++) { //loop through the three students
        printf("%-20d%-20s%-20s%-20c%-20d%-20c\n", students[i].id_number, students[i].name.first_name, students[i].name.second_name, students[i].name.initial, students[i].age, students[i].sex); //print nicely to console
    }
    printf("/***************************************************************************************/\n");
    return 0;
}

int main() {
    struct Student students[3];
    printf("\nDATA ENTRY\n");
    readIn(&students[0]);
    readIn(&students[1]);
    readIn(&students[2]);
    printf("\nDISPLAY INDIVIDUAL\n");
    readOut(students[0]);
    readOut(students[1]);
    readOut(students[2]);
    printf("\nDISPLAY ALL\n");
    printAll(students);

    return 1;
}