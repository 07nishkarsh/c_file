#include<stdio.h>
int multiply(int a, int b, int c);

int main (){
    int x, y, z;
    printf("Enter x y z: ");
    scanf("%d %d %d", &x, &y, &z);
    int ans = multiply(x, y, z);
    printf("The multiplication of numbers is %d", ans);
    return 0;
}
int multiply(int a, int b, int c){
    int result = a * b * c;
    return result;
}