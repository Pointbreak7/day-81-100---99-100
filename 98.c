#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p1, p2;
    printf("Enter name for person 1: ");
    scanf("%s", p1.name);
    printf("Enter age for person 1: ");
    scanf("%d", &p1.age);
    printf("Enter name for person 2: ");
    scanf("%s", p2.name);
    printf("Enter age for person 2: ");
    scanf("%d", &p2.age);
    if(strcmp(p1.name, p2.name) == 0 && p1.age == p2.age) {
        printf("Identical\n");
    } else {
        printf("Not identical\n");
    }
    return 0;
}