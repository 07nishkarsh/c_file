#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], i;
    float avg , sum = 0;
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }
    avg = sum / n;
    printf("sum of all numbers: %f\n", sum);
    printf("Average of all numbers: %f\n", avg);
    return 0;
}