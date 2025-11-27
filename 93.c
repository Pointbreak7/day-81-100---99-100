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
    float max = students[0].marks;
    int index = 0;
    for(int i = 1; i < 5; i++) {
        if(students[i].marks > max) {
            max = students[i].marks;
            index = i;
        }
    }
    printf("Student with highest marks: %s (%.2f)\n", students[index].name, max);
    return 0;
}