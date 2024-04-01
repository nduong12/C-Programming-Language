#include <stdio.h>
void main() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("Ban vua nhap so chan");
    } else {
        printf("Ban vua nhap so le");
    }
}
