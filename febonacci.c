#include<stdio.h>
int main (){
    int a = 0, b = 1, n, c;
    printf("Enter the number till you wanna print: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    return 0;
}