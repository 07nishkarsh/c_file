#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}
int main (){
    int a = 5;
    int b = 10; 
    printf("Before swap function call: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap function call: a = %d, b = %d\n", a, b);
    printf("nishakarsh here\n");
    return 0;
}