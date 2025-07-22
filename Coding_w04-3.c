#include <stdio.h> 

int main() {             
          
    char nameInitial = 'P'; // char ใช้เก็บค่าตัวแปรที่เป็นตัวอักษรเเรกของชื่อ

    int age = 18; // int ใช้เก็บค่าตัวแปรที่เป็นตัวเลขจำนวนเต็ม อายุ

    float weight = 47.5; // float ใช้เก็บค่าตัวแปรที่เป็นตัวเลขที่เป็นทศนิยม น้ำหนัก

    char gender[] = "Male"; // char[] ใช้เก็บค่าตัวแปรที่เป็นคำ เพศ

    printf("nameInitial: %c\n", nameInitial);
    printf("age: %d\n", age);
    printf("weight: %.1f\n", weight);
    printf("gender: %s\n", gender);
    return 0;
}