#include <stdio.h>
union book{
    char name[50];
    int page;
    float price;
};
int main (){
    union book b[3];
    for (int i = 0; i <3; i++){
        printf("entre book %d name " , i+1);
        scanf("%s", b[i].name);
        printf("entre book %d pages " , i+1);
        scanf("%d", &b[i].page);
        printf("entre book %d price " , i+1);
        scanf("%f", &b[i].price);
    }
    for (int i = 0; i <3; i++){
        printf("book %d: name=%s, pages=%d, price=%.2f\n", i+1, b[i].name, b[i].page, b[i].price);
    }
    return 0;
}