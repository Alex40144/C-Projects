#include "stack.h"
#include <stdio.h>

int main(void) {
    make_empty();
    push(23);
    push(8);
    printf("%d\n", pop());
    printf("%d\n", pop());
}