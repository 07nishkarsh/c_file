#include<stdio.h>

int main(){
    int S1, S2, S3, S4, S5;
    float avg;
    printf("enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &S1, &S2, &S3, &S4, &S5);
    avg = ((S1 + S2 + S3 + S4 + S5) / 5);
    printf("average: %f\n", avg);
    if (avg>= 90)
    printf("Grade A");
    if (avg >= 75 && avg <= 89)
    printf("Grade B");
    if (avg >= 50 && avg <= 74)
    printf("Grade C");
    if (avg < 50)
    printf("Fail");
     
    return 0;
}