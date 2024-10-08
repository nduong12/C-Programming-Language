#include <stdio.h>

void tangLuong(int* luong, int namBatDau, int namHienTai) {
    int soNamLamViec = namHienTai - namBatDau;
    int soLanTangLuong = soNamLamViec / 3;
    for (int i = 0; i < soLanTangLuong; i++) {
        *luong += *luong / 100;
    }
}

int main() {
    int N;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &N);

    int luong[N];
    int namBatDau[N];
    int namHienTai;

    printf("Nhap nam hien tai: ");
    scanf("%d", &namHienTai);

    for (int i = 0; i < N; i++) {
        printf("Nhap luong va nam bat dau lam viec cua nhan vien %d: ", i+1);
        scanf("%d %d", &luong[i], &namBatDau[i]);
    }

    for (int i = 0; i < N; i++) {
        tangLuong(&luong[i], namBatDau[i], namHienTai);
        printf("Luong cua nhan vien %d sau khi tang la: %d\n", i+1, luong[i]);
    }

    return 0;
}
