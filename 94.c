#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printStudent(s);
    return 0;
}