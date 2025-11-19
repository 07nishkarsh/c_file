#include<stdio.h>
int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    int copyArr[10];
    for (i = 0; i < 10; i++) {
        copyArr[i] = arr[i];
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", copyArr[i]);
    }
    return 0;
}