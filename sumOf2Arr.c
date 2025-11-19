#include <stdio.h>

int main() {
    int arr1[10], arr2[10], newArr[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter first array element: ");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("Enter second array element: ");
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 10; i++) {
        newArr[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
