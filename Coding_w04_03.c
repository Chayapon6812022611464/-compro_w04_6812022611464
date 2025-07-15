#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("เรียกใช้ฟังก์ชันนี้ครั้งที่ %d/\n", counter);
}

int main() {
    countCall();
    countCall();
    return 0;
}