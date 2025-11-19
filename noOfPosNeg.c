#include<stdio.h>
int main()
{
    int arr[10], i, sum = 0;
    int pos_count = 0, neg_count = 0;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
            pos_count++;
        else
            neg_count++;
    }
    printf("Number of positive integers: %d\n", pos_count);
    printf("Number of negative integers: %d\n", neg_count);
    return 0;
}