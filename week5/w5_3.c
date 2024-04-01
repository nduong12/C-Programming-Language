#include <stdio.h>
int main() {
    float a, b, c, max_number;
    printf("Nhap vao ba so thuc: ");
    scanf("%f %f %f", &a, &b, &c);
    max_number = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("So lon nhat la: %f", max_number);
    return 0;
}

