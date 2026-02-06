#include <stdio.h>
int main(){
    int arr[3][3];
    int brr[3][3];
    printf("Enter elements for first 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements for second 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    // Adding two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum =0;
            sum = arr[i][j] += brr[i][j];
            printf("%d ", sum);
        }
    }
    // Multiplying two matrices
    printf("\nMultiplication of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int product = 0;
            for (int k = 0; k < 3; k++) {
                product += arr[i][j] * brr[k][j];
            printf("%d ", product);
            }
        }
    }
     
    return 0;
}