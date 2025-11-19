#include<stdio.h>
void reverseArr(int *arr, int n){
    int s = 0, e = n - 1, temp;
    while (s < e) {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, n=10;
    printf("Enter 10 integers:\n");
    reverseArr(arr,n);
    for (int i = 0; i < 10; i++) {
         printf("%d ", arr[i]);
    }
   
    return 0;
}