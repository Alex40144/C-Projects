#include <stdio.h>
#include <math.h>

float impedance, phaseAngle;

void function(float capacitance, float resistance, float inductance, float angF, float *impedance, float *phaseAngle) {
    *impedance = sqrt((resistance * resistance) + pow(((angF * inductance) - (1/(angF * capacitance))), 2));
    *phaseAngle = acos(resistance / *impedance);
}

int main(void) {
    float capacitance, resistance, inductance, angF;
    capacitance = 2;
    resistance = 2;
    inductance = 2;
    angF = 20;
    function(capacitance, resistance, inductance, angF, &impedance, &phaseAngle);
    printf("impedance: %d\nPhase Angle: %d", impedance, phaseAngle);
}