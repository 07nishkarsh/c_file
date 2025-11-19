#include <stdio.h>
int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main (){
    int arr[10] = {34, 67, 23, 89, 2, 90, 11, 45, 78, 56};
    int max = findMax(arr, 10);
    printf("The maximum element in the array is: %d", max);

    return 0;
}