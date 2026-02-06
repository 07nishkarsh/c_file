// #include <stdio.h>
// struct book{
//     char name[50];
//     int page;
//     float price;
// };
// int main (){
//     struct book b[3];
//     for (int i = 0; i <3; i++){
//         printf("entre book %d name " , i+1);
//         scanf("%s", b[i].name);
//         printf("entre book %d pages " , i+1);
//         scanf("%d", &b[i].page);
//         printf("entre book %d price " , i+1);
//         scanf("%f", &b[i].price);
//     }
//     for (int i = 0; i <3; i++){
//         printf("book %d: name=%s, pages=%d, price=%.2f\n", i+1, b[i].name, b[i].page, b[i].price);
//     }
//     return 0;
// }

#include <stdio.h>

struct student {
    char name [50];
    int age;
    float marks;
};
int main (){
    struct student s[5];
    for(int i= 0; i<5; i++){
       printf(" student %d detail", i+1);
         printf("\n enter name: ");
            scanf ("%s", s[i].name);
            printf ("enter age: ");
            scanf ("%d", &s[i].age);
            printf ("enter marks: ");
            scanf ("%f", &s[i].marks);

            for(int i =0; i<5; i++){
                printf ("student %d : name=%s, age=%d, marks=%.2f\n", i+1, s[i].name, s[i].age, s[i].marks);
            }
    }
}