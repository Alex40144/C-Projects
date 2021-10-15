#include <stdio.h>
#include<ctype.h>
 
int main(void) {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if(!isupper(a)){
        printf("Lowercase\n");
        a = toupper(a);
        printf("uppercase version: %c", a);
    } else {
        printf("Uppercase");
    }
	
    return 0;
}