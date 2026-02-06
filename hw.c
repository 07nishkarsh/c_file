// #include<stdio.h>
// int main(){
//     char ch[10];
//     printf("enter name\n" );
//     scanf("%s", ch);
//     int i =0;
//     while (i!=10){
//     printf("%c", ch[i]);
//     i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main (){
    char str[50];
    printf("Enter your name: \n");
    scanf("%[^\n]", str);

    int i =0;
    while(str[i] != '\0'){
        printf ("%c", str[i]);
        i++;
    }
    return 0;
}

// #include <stdio.h>
// int main (){    
//     char ch[50] = "kumar nishkarsh";
//     int i =0;
//     while(ch[i] != '\0'){
//         printf ("%c", ch[i]);
//         i++; 
//     } 
// }
