#include <stdio.h>
int main (){
    int arr[3][3];
    int rowSum[3] = {0, 0, 0};
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            rowSum[i] += arr[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(int i = 0; i < 3; i++){
        printf("Row %d = %d\n",i, rowSum[i]);
        printf("\n nishakarsh here");
    }
    return 0;
}