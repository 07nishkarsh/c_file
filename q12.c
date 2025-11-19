#include<stdio.h>
int digitSum(int n){
   if(n == 0){
      return 0;
   }
   return (n % 10) + digitSum(n / 10);
}
int main() {
   int x = 4056;
   int ans= digitSum(x);
    printf("The sum of digits is: %d", ans);
    return 0;
}