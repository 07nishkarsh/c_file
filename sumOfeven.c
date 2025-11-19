#include<stdio.h>

int main (){
    int n;
    int sum;
    printf ("enter the vale of n:- ");
    scanf("%d", &n);

    n = n/2;
    sum = n*(n+1);
    printf("sum of even no upto n is :- %d", sum);
    return 0;
}