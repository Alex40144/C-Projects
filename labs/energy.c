#include <stdio.h>

float massToEnergy(float mass);

int main(void){
    float mass;
    printf("enter mass in kg: ");
    scanf("%f", &mass);

    printf("%f", massToEnergy(mass));

}

float massToEnergy(float mass){
    float energy = mass * 90000000000000000; //e = m * c^2
    return energy;
}