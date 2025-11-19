#include<stdio.h>
int main() {
    int a =2;
    int b =4;
    char c;
    printf("press 'A' for add\n");
    printf("press 'M' for multi\n");
    printf("press 'D' for div\n");
    printf("press 'S' for sub\n");

    printf("Enter a operator: ");
    scanf("%c",&c);
    switch(c)
    {
    case 'A':
        printf("%d", a + b);
        break;
    case 'M':
        printf("%d", a * b);
        break;
    case 'S':
        printf("%d", a - b);
        break;
    case 'D':
        printf("%d", a / b);
        break;
    default:
        printf("i am in default\n");        
    } 
 }