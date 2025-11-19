#include <stdio.h> 
int main() {
    int n, sum =0;
    float avg;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);   
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = sum / n;
    printf("The average of the array elements is: %f", avg);
    return 0;   
}