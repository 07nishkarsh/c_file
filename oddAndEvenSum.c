#include<stdio.h>
int main()
{
    int arr[10], i;
    for(i = 0; i < 10; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    int oddSum = 0, evenSum = 0;
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
    return 0;
}