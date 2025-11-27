#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter roll no: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("Name: %s, Roll No: %d, Marks: %.2f\n", s->name, s->roll_no, s->marks);
    free(s);
    return 0;
}