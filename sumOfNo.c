#include<stdio.h>

int main (){
    int n;
    int sum;
    printf ("enter the vale of N:- ");
    scanf("%d", &n);

    sum = n/2*(1+n);
    printf("sum of no upto N is :- %d", sum);
    return 0;
}