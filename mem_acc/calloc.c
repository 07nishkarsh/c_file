#include <stdio.h>
#include <stdlib.h>

int main (){
    int *prt;
    prt = (int *) calloc(10, sizeof(int));
    for (int i = 0; i < 9; i++){
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &prt[i]);
    }
    for (int i = 0; i < 10; i++){
        printf("Element %d: %d\n", i + 1, prt[i]);
    }
    free(prt);
    return 0;       

    //calloc is used to allocate memory for an array of elements and initializes all bytes to zero.
}