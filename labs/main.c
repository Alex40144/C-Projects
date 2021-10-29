#include <stdio.h>

int main(void){
    if(4 && 8){
        printf("true\n");
    } else {
        printf("false\n");
    }
    if(4 & 8){
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}