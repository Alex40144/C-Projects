#include <stdio.h>

struct point{
        float x;
        float y;
    } ;

struct rect {
    struct point upperLeft;
    struct point lowerRight;
};

int main() {

    struct rect rect;
    struct point center, translation;


    printf("enter upper left x value: ");
    scanf("%f", &rect.upperLeft.x);
    printf("enter upper left y value: ");
    scanf("%f", &rect.upperLeft.y);
    printf("enter lower right x value: ");
    scanf("%f", &rect.lowerRight.x);
    printf("enter lower right y value: ");
    scanf("%f", &rect.lowerRight.y);

    float area = (rect.lowerRight.x - rect.upperLeft.x) * (rect.lowerRight.y - rect.upperLeft.y);

    center.x = (rect.lowerRight.x + rect.upperLeft.x) / 2;
    center.y = (rect.lowerRight.y + rect.upperLeft.y) / 2;

    printf("center: (%f,%f)\n", center.x, center.y);


    printf("enter translation x value: ");
    scanf("%f", &translation.x);
    printf("enter translation y value: ");
    scanf("%f", &translation.y);

    rect.upperLeft.x += translation.x;
    rect.lowerRight.x += translation.x;
    rect.upperLeft.y += translation.y;
    rect.lowerRight.y += translation.y;

    printf("translated rect: (%f,%f), (%f,%f) ", rect.upperLeft.x, rect.upperLeft.y, rect.lowerRight.x, rect.lowerRight.y);





    return 1;
}