// #include <stdio.h>

// int main (){
//     FILE *ptr = NULL;
//     ptr = fopen("new.txt", "a+");
//     fputs("This line is added using a+ mode.", ptr);
//     fclose(ptr);
//     return 0;
// }
// //a+ mode is used to read and append to a file. It creates a new file if the file does not exist. it appends data at the end of the file.

#include <stdio.h>
int main (){
    FILE *ptr = NULL;
    ptr = fopen("new.txt", "a+");
    fputs("\n this senetence is added using a+ mode", ptr);
    fclose(ptr);
    return 0; 
}
