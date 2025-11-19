#include<stdio.h>
int main (){
    int n;
    float avg;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    int arr[n];
    int pos=0;
    int neg=0;
    int zero=0;
    for (int i = 0; i < n; i++) {
        printf("Enter element");
        scanf("%d", &arr[i]);
    }
    int  no=0;
    while (no <n){
        for (int i=0; i < n; i++) {
            if (arr[i] < 0){  
                pos++;
                no++;
            }
            else if (arr[i] > 0){
                neg++;
                no++;
            }
            else {
                zero++;
                no++;
            }
        }
    }
    printf("The number of positive elements is: %d\n", pos);
    printf("The number of negative elements is: %d\n", neg);
    printf("The number of zero elements is: %d\n", zero);
    return 0;
}
