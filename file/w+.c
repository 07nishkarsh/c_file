#include <stdio.h>

int main (){
    FILE *ptr = NULL;
    ptr = fopen("new.txt", "w+");
    fputs("This line is added using W+ mode.", ptr);
    fclose(ptr);
    return 0;
}
//w+ mode is used to read and write to a file. It creates a new file if the file does not exist or truncates the file to zero length if it already exists.