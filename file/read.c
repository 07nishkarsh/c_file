#include <stdio.h>

// int main (){
//     FILE *prt= NULL;
//     prt =  fopen("new.txt", "r");
//     char c = fgetc(prt);
//     while (c != EOF){
//         printf("%c", c);
//         c = fgetc(prt);
//     }
//     fclose(prt);
//     return 0;
// }

#include <stdio.h>
int main (){
    FILE *ptr = NULL;
    ptr = fopen("new.txt", "r");
    char c = fgetc(ptr);
    while (c != EOF){
        printf ("%c", c);
        c = fgetc(ptr);
    }
    fclose (ptr);
    return 0;
}