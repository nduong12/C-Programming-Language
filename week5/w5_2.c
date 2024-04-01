#include <stdio.h>
int main() {
    int a, b, c, kq1, kq2;
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    kq1 = a++ + ++a;
    kq2 = --a - b-- * ++c;
    printf("kq1 = %d\n", kq1);
    printf("kq2 = %d\n", kq2);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    return 0;
}
