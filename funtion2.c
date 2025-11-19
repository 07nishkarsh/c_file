#include<stdio.h>

int funt();
int main (){
    int ans = funt();
    printf("The converted character is: %c", ans);
    return 0;
}
int funt(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90){
        return (ch);
    }
    else{
        return (ch+32);
    }
}