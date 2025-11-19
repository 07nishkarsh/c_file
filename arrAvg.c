#include <stdio.h>

float findAverage(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  
    }
    return (float)sum / n;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float average = findAverage(arr, n);
    printf("The average value is: %f", average);

    return 0;
}