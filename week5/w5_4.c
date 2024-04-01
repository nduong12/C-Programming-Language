#include <stdio.h>
void main() {
    int sodien;
    float tiendien;
    printf("Nhap vao so dien tieu thu trong thang: ");
    scanf("%d", &sodien);
    // Tinh so tien phai tra tuong ung voi so dien tieu thu
    tiendien = (sodien <= 50) ? (sodien * 500) : (sodien <= 100 ? (50 * 500 + (sodien-50) * 1000) : (sodien <= 150 ? (50 * 500 + 50 * 1000 + (sodien-100) * 1200) : (50 * 500 + 50 * 1000 + 50 * 1200 + (sodien - 150) * 1600)));
    printf("\nTien dien phai tra: %f\n", tiendien);
}
