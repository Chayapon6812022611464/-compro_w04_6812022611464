#include <stdio.h>

const int GLOBAL_VAL = 50;

void showValue() {
    const int LOCAL_VAL =100;
    printf("LOCAL_VAL = %d\n", LOCAL_VAL);
    printf("GLOBAL_VAL = %d\n", GLOBAL_VAL);
}

int main() {
    showValue();
    printf("GLOBAL_VAL = %d\n", GLOBAL_VAL);
    return 0;
}