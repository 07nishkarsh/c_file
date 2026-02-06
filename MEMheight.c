#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *height;
    float sum = 0, avg;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    height = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        printf("Enter height for person %d: ", i + 1);
        scanf("%f", &height[i]);
        sum += height[i];
    }

    avg = sum / n;
    printf("Average height: %.2f\n", avg);

    free(height);
    return 0;
}
