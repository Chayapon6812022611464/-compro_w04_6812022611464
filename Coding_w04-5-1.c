#include <stdio.h>

void counterCall() {
    int counter = 0;  
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    counterCall();
    printf("After first call:\n");
    counterCall();
    return 0;
}
// ผลลัพธ์ที่ได้จะเป็น printf ครั้งที่ 1 นับครั้งที่ 1, เเละ printf ครั้งที่ 2 และนับเป็นครั้งที่ 1 เพราะไม่ใช้ตัวแปร static จึงจะถูก reset ทุกครั้งที่เรีกฟังก์ชัน