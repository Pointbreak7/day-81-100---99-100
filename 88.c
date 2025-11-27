#include <stdio.h>

enum Colors {RED=1, GREEN, BLUE, YELLOW};

int main() {
    enum Colors arr[] = {RED, GREEN, BLUE, YELLOW};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        switch(arr[i]) {
            case RED: printf("RED: %d\n", RED); break;
            case GREEN: printf("GREEN: %d\n", GREEN); break;
            case BLUE: printf("BLUE: %d\n", BLUE); break;
            case YELLOW: printf("YELLOW: %d\n", YELLOW); break;
        }
    }
    return 0;
}