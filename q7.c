#include<stdio.h>
int countvowels(char str[]){
   int count = 0;
   for(int i = 0; str[i] != '\0'; i++){
      char ch = str[i];
      if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
         count++;
      }
   }
   printf("Number of vowels: %d\n", count);
   return count;
}
int main() {
   char str[] = "kumar nishkarsh";
   int count = countvowels(str);
   printf("Total vowels in the string: %d\n", count);
    return 0;

}