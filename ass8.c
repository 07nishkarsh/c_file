#include <stdio.h>

int main() {
    int ch;
    float temp;

    printf(" press 1. to convert Celsius to Fahrenheit\n");
    printf("press 2. to convert Fahrenheit to Celsius");
    printf("Enter choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        printf("Enter Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit = %f", (temp* 9/5) + 32);
    }
    else if (ch == 2) {
        printf("Enter Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius = %f", (temp - 32) * 5/9);
    }
    return 0;
}
