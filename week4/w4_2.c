#include <stdio.h>
int main() {
    char c;
    int i;
    float f;
    double d;
    printf("Nhap mot ky tu: ");
    scanf("%c", &c);
    printf("Nhap mot so nguyen: ");
    scanf("%d", &i);
    printf("Nhap mot so thuc kieu float: ");
    scanf("%f", &f);
    printf("Nhap mot so thuc kieu double: ");
    scanf("%lf", &d);
    printf("Ky tu vua nhap: %c\n", c);
    printf("So nguyen vua nhap: %d\n", i);
    printf("So thuc kieu float vua nhap: %f\n", f);
    printf("So thuc kieu double vua nhap: %lf", d);
    return 0;
}

