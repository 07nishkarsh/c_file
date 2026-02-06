// #include<stdio.h>

// int main(){
//     FILE *prt = NULL;
//     prt= fopen("new.txt", "w");
//     fprintf(prt, "Hello World!\nWelcome to C programming.");
//     fputs("\nThis is a new line added to the file.", prt);
//     fclose(prt);
//     return 0;
// }

#include <stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("new.txt", "w");
    fputs("helllo, \n these sententces are added using w mode", ptr);
    fclose(ptr);
    return 0;
}