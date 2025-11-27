#include <stdio.h>
#include <string.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p;
    strcpy(p.name, "John");
    p.gender = MALE;
    printf("%s's gender: ", p.name);
    switch(p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
    }
    return 0;
}