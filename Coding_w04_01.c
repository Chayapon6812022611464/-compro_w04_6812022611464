#include <stdio.h>

void functionB() {
     int value = 99;
     printf("Value in functionB: %d\n", value);
}

int main() {
    int vaiue = 42;
    printf("Value in main (before): %d\n", value);

    
    functionB();

    printf("Value in main (after): %d\n", value);
    return 0;
}