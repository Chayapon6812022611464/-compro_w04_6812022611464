#include <stdio.h>

int score = 0;

void updateScore(){
    score = 100;
    printf("ใน updateScore(): score = %d\n", score);
}

void showScore() {
    printf("ใน showScore(): Score = %d\n", score);
}
 int main() {
    printf("ก่อนเรียกฟังก์ชัน: score = %d\n", score);
    updateScore();
    showScore();
    return 0;
}