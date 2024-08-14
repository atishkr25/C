#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
} student[50];

int main() {
    int i;
    printf("Enter students info:\n");
    for (i = 0; i < 2; i++) {
        student[i].roll = i + 1;
        printf("\nFor roll number %d\n", student[i].roll);
        printf("Enter first name: ");
        scanf("%s", student[i].name); // Remove \n here
        printf("Enter marks: ");
        scanf("%f", &student[i].marks); // Remove \n here
    }
    printf("Display information: -");
    for (i = 0; i < 2; i++) {
        printf("\nFor roll number %d\n", i + 1);
        printf("Student name: %s\n", student[i].name);
        printf("Student marks: %.1f\n", student[i].marks);
    }
    float totalmarks= 0;
    for(i=0;i<50;i++){
    totalmarks = totalmarks+student[i].marks;
    }
    printf("\ntotal marks of all students : %.2f", totalmarks);

    return 0;
}
