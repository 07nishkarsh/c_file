#include <stdio.h>
int main() {
    int n=10;
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    int newarr[n];
    for (int i = 0; i < n; i++){
        newarr[i] =arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", newarr[i]);
    }
    return 0;
}