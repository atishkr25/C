#include <stdio.h>

struct employee {
    int id;
    char name[50];  
    float salary;
} employee[50];

int main() {
    int i;
    struct employee e1;

    printf("Employee information:\n");

    for (i = 0; i < 50; i++) {
        printf("\nFor employee %d:\n", i + 1);
        printf("Enter the ID of employee: ");
        scanf("%d", &e1[i].id);
        printf("Enter the employee name: ");
        scanf("%s", e1[i].name);
        printf("Enter the employee salary: ");
        scanf("%f", &e1[i].salary);
    }

    printf("\nDisplay information of employees:\n");

    for (i = 0; i < 50; i++) {
        printf("\nFor employee %d:\n", i + 1);
        printf("Employee ID: %d\n", e1[i].id);
        printf("Employee name: %s\n", e1[i].name);
        printf("Employee salary: %.2f\n", e1[i].salary);
    }

    return 0; 
}
