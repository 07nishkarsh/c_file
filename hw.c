#include <stdio.h> 
  
struct student { 
    char name[50]; 
    int urn; 
   int attendance[3]; 
    float midsem; 
};  
int main() { 
    struct student s[1]; 
    int i, j; 
    printf("Enter data of 1 students (Section B, B.Tech 1st Year)\n"); 
    for (i = 0; i < 1; i++) { 
        printf("\n----- Student %d -----\n", i + 1); 
        printf("Enter Name: "); 
        scanf("%s", s[i].name); 
        printf("Enter URN: "); 
        scanf("%d", &s[i].urn); 
        printf("Enter Attendance in %d subjects:\n", 3); 
        for (j = 0; j < 3; j++) { 
            printf("Subject %d Attendance: ", j + 1); 
            scanf("%d", &s[i].attendance[j]); 
        } 
        printf("Enter Mid-Sem Marks: "); 
        scanf("%f", &s[i].midsem);
    } 
    // Display Student Details 
    printf("\n\n========== STUDENT DETAILS ==========\n"); 
    for (i = 0; i < 1; i++) { 
        printf("\n----- Student %d -----\n", i + 1); 
        printf("Name: %s\n", s[i].name); 
        printf("URN : %d\n", s[i].urn); 
        printf("Attendance: "); 
        for (j = 0; j < 3; j++) { 
            printf("%d ", s[i].attendance[j]); 
        } 
        printf("\nMid-Sem Marks: %.2f\n", s[i].midsem); 
    } 
    return 0; 
} 