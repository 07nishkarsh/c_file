#include <stdio.h>
#include <stdlib.h>
int main (){
    int *h;
    h = (int *)malloc(10 * sizeof(int));
    h = (int *)realloc(h, 15 * sizeof(int));
    return 0;
}