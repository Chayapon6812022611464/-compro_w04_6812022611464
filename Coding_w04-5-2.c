#include <stdio.h>

void counterCall() {
    static int counter = 0; 
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
// ผลลัพธ์ที่ได้จะเป็น printf ครั้งที่ 1 นับเป็นครั้งที่ 1, เเละ printf ครั้งที่ 2 นับเป็นครั้งที่ 2 เพราะใช้ตัวแปร static ทำให้ใช้ค่าตัวแปรต่อจากครั้งที่ 1
// สรุป ในการใช้ตัวแปร static จะทำให้ค่าตัวแปรไม่ถูก reset การนับครั้งที่เรียกใช้ฟังก์ชัน