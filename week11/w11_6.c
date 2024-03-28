#include <stdio.h>
#include <stdlib.h>

char* noiChuoi(char* chuoi1, char* chuoi2) {
    while(*chuoi1)   // di chuyển con trỏ đến cuối chuỗi 1
        chuoi1++;
    while(*chuoi1++ = *chuoi2++);  // sao chép chuỗi 2 vào cuối chuỗi 1
    return chuoi1;  // trả về chuỗi đã được nối
}

int main() {
    char chuoi1[100] = "Xin chào ";
    char chuoi2[] = "thế giới!";
    noiChuoi(chuoi1, chuoi2);
    printf("%s\n", chuoi1);  // in ra chuỗi sau khi nối
    return 0;
}

