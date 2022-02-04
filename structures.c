#include <stdio.h>

#define print printf

struct properties
{
    int productNumber;
    int stock;
};


struct dimension
{
    float x, y, z;
    float volume;
    struct properties properties;
};



/*
int main(void) {
    struct dimension obj;
    obj.x = 4.2;
    obj.y = 1.2;
    obj.z = 10;
    obj.volume = obj.x * obj.y * obj.z;
    obj.properties.productNumber = 32;

    print("volume: %f", obj.volume);

    return 0;
}*/