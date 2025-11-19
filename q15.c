#include <stdio.h>

void printDiagonal(int a[3][3]) {
    printf("Primary diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\nSecondary diagonal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i][2 - i]);
    }
    printf("\n");
}

int main() {
    int a[3][3];

    printf("Enter 9 elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printDiagonal(a);
    return 0;
}
