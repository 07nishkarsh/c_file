#include <stdio.h>
#include <math.h>
int main() {
    float pri, time, rate;
    printf("Enter principal, time and rate respectively: ");
    scanf("%f %f %f", &pri, &time, &rate);
    float SI = (pri * time * rate) / 100;
    float CI = pri* pow((1 + rate / 100), time) - pri;
    printf("Compound Interest is: %f\n", CI);
    printf("Simple Interest is: %f", SI);

    return 0;
}

