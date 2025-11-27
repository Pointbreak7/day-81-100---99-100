#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r = ADMIN;
    switch(r) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER: printf("Welcome, User! You have standard access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have limited access.\n"); break;
    }
    r = USER;
    switch(r) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER: printf("Welcome, User! You have standard access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have limited access.\n"); break;
    }
    r = GUEST;
    switch(r) {
        case ADMIN: printf("Welcome, Admin! You have full access.\n"); break;
        case USER: printf("Welcome, User! You have standard access.\n"); break;
        case GUEST: printf("Welcome, Guest! You have limited access.\n"); break;
    }
    return 0;
}