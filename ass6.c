#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;   // discriminant

    if (d > 0) {
        r1 = (-b + pow(d,2)) / (2*a);
        r2 = (-b - pow(d,2)) / (2*a);
        printf("Roots are real and different: %f %f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal: %f %f\n", r1, r2);
    }
    else {
        printf("Roots are imaginary.");
    }

    return 0;
}