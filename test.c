#include <stdio.h>
#include "structures.c"

int accum(int val){
    static int tot;
    tot += val;
    return tot;
}

int main (void) {
    for(int i = 0; i < 5; i++){
        printf("%d\n", accum(i));
    }
}