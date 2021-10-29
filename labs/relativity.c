#include <stdio.h>
#include <math.h>

float getTime(float origTime, float speed);

int main(void){
    float time;
    float speed;

    printf("enter time: ");
    scanf("%f", &time);
    printf("enter speed: ");
    scanf("%f", &speed);

    printf("%f", getTime(time, speed));
}

float getTime(float origTime, float speed) {
    float c = 300000000.0;
    float time;
    time = origTime / sqrt(1-((speed*speed)/(c*c)));
    return time;
}