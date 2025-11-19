#include <stdio.h>

int* largest(int arr[], int n) {
    int *maxPtr = &arr[0];   

    for (int i = 1; i < n; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];  
        }
    }

    return maxPtr;  
}

int main() {
    int arr[] = {10, 25, 7, 45, 19};
    int n = 5;

    int *ptr = largest(arr, n);

    printf("Largest element = %d\n", *ptr);
    printf("Address of largest element = %p\n", (void*)ptr);

    return 0;
}
