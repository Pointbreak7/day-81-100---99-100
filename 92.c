#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}