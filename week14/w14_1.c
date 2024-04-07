#include <stdio.h>

typedef struct {
    int ngay;
    int thang;
    int nam;
} NgayThangNam;

NgayThangNam nhapNgay() {
    NgayThangNam ngay;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &ngay.ngay, &ngay.thang, &ngay.nam);
    return ngay;
}

int soSanhNgay(NgayThangNam ngay1, NgayThangNam ngay2) {
    if (ngay1.nam < ngay2.nam || (ngay1.nam == ngay2.nam && ngay1.thang < ngay2.thang) || (ngay1.nam == ngay2.nam && ngay1.thang == ngay2.thang && ngay1.ngay < ngay2.ngay)) {
        return -1;
    } else if (ngay1.nam == ngay2.nam && ngay1.thang == ngay2.thang && ngay1.ngay == ngay2.ngay) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    NgayThangNam ngay1 = nhapNgay();
    NgayThangNam ngay2 = nhapNgay();
    int ketQua = soSanhNgay(ngay1, ngay2);
    if (ketQua == -1) {
        printf("Ngay 1 truoc Ngay 2\n");
    } else if (ketQua == 0) {
        printf("Ngay 1 trung voi Ngay 2\n");
    } else {
        printf("Ngay 1 sau Ngay 2\n");
    }
    return 0;
}

