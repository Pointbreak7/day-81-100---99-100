#include <stdio.h>

enum Months {JANUARY=31, FEBRUARY=28, MARCH=31, APRIL=30, MAY=31, JUNE=30,
             JULY=31, AUGUST=31, SEPTEMBER=30, OCTOBER=31, NOVEMBER=30, DECEMBER=31};

int main() {
    printf("JANUARY: %d\n", JANUARY);
    printf("FEBRUARY: %d\n", FEBRUARY);
    printf("MARCH: %d\n", MARCH);
    printf("APRIL: %d\n", APRIL);
    printf("MAY: %d\n", MAY);
    printf("JUNE: %d\n", JUNE);
    printf("JULY: %d\n", JULY);
    printf("AUGUST: %d\n", AUGUST);
    printf("SEPTEMBER: %d\n", SEPTEMBER);
    printf("OCTOBER: %d\n", OCTOBER);
    printf("NOVEMBER: %d\n", NOVEMBER);
    printf("DECEMBER: %d\n", DECEMBER);
    return 0;
}