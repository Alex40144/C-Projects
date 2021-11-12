#include <stdio.h>

#define print printf

enum directions {
    north,
    east,
    south,
    west
};




int main(void) {

    directions direction = north;

    switch (direction)
    {
    case north:
        print("it works");
        break;
    
    default:
        print("it didn't work");
        break;
    }


    return 0;
}