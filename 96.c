#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[20];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee e;
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter joining day: ");
    scanf("%d", &e.joining_date.day);
    printf("Enter joining month: ");
    scanf("%d", &e.joining_date.month);
    printf("Enter joining year: ");
    scanf("%d", &e.joining_date.year);
    printf("Employee: %s, ID: %d, Joined: %d/%d/%d\n", e.name, e.id, e.joining_date.day, e.joining_date.month, e.joining_date.year);
    return 0;
}