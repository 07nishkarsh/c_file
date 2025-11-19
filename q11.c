#include <stdio.h>
int add (int *a, int *b){
    int sum = *a + *b;
    return sum;
}
int main(){
    int a = 3;
    int b = 8;
     int ans =add(&a, &b);
    printf("The sum is: %d", ans);
    return 0;
}