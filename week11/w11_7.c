#include <stdio.h>

#define N 10 
#define namHienTai 2024 

void tangLuong(int namBatDau, double* luongHienTai) {
    int soNamLamViec = namHienTai - namBatDau;
    int soLanTangLuong = soNamLamViec / 3;
    for (int i = 0; i < soLanTangLuong; i++) {
        *luongHienTai *= 1.01;
    }
}

int main() {
    double luong[N] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int namBatDau[N] = {2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019};

    for (int i = 0; i < N; i++) {
        tangLuong(namBatDau[i], &luong[i]);
        printf("Mức lương mới của nhân viên %d: %.2f\n", i, luong[i]);
    }

    return 0;
}


