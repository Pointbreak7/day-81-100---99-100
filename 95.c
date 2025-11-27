#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

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
    struct Student top = findTopStudent(students, 5);
    printf("Top Student: Name: %s, Roll No: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}