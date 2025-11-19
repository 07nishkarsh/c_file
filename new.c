#include<stdio.h>
int main(){
    char *colors[5]={"Red","Green","Blue","Yellow"};
    for(int i=0;i<5;i++){
        printf("%s\n",colors[i]);
    }
    return 0;
}