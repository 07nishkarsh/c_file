    #include <stdio.h>
    int main()
    {
        int arr[10], i, oddSum = 0, evenSum = 0;
        printf("Enter 10 integers:\n");
        for (i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                evenSum += arr[i];
            } else {
                oddSum += arr[i];
            }
        }
        printf("Sum of even numbers: %d\n", evenSum);
        printf("Sum of odd numbers: %d\n", oddSum);
        return 0;
    }