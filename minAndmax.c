#include<stdio.h>
int main()
{
    int arr[10], i;
    int min, max;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);
    return 0;
}