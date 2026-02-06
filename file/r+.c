#include <stdio.h>

int main (){
    FILE *ptr = NULL;
    ptr = fopen("new.txt", "r+");
    fputs("This line is added using r+ mode.", ptr);
    char c = fgetc(ptr);
    while(c!= EOF){
        printf ("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}
//r+ mode is used to read and write to a file. It replace the stating words with new word and leaves remaining as it is.
// it does not create a new file if the file does not exist.
