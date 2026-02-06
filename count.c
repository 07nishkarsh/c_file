#include <stdio.h>
int main (){
    char n[] = "nishkarsh";
    int count = 0;
    for(int i = 0; n[i] != '\0'; i++){
        printf ("the character at %d is %c\n", i, n[i]);
        count++;
    }
    printf("The total number of characters in the string is %d\n", count);  
}
