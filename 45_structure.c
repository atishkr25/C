#include <stdio.h>
#include <string.h>


struct Employee {
    int code;
    char name[20];
    char designation[20];
    float salary;
    char department[20];
    char city[20];
};

int main() {
    struct Employee employees[20];
    int i;
    int numEmployees;

    // Input details for employees
    printf("Enter details for employees:\n");
    printf("Number of employees to enter ", 100);
    scanf("%d", &numEmployees);

    for (i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        employees[i].code = i + 1;

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter designation: ");
        scanf("%s", employees[i].designation);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter department: ");
        scanf("%s", employees[i].department);

        printf("Enter city of posting: ");
        scanf("%s", employees[i].city);
    }

    // Display employees earning more than 20000
    printf("\nEmployees earning more than 20000:\n");
    for (i = 0; i < numEmployees; i++) {
        if (employees[i].salary > 20000) {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}
