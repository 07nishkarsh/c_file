#include <stdio.h>

int main (){
    int n;
    int digit;
    int sunOfDigits=0;
    printf ("enter the valeu of n:-  ");
    scanf("%d", &n);

    if (n<0)
    printf(" Entered number is nevative");
    else
    while (n !=0){
        digit = n%10;
        n=n/10;
        sunOfDigits = sunOfDigits+digit;
    }
    printf("%d", sunOfDigits);
    return 0;
}