#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ten[11];
    int soLuong;
    char size[4];
    float giaBan;
} SanPham;

void nhapSanPham(SanPham *sp) {
    printf("Nhap ten san pham: ");
    scanf("%s", sp->ten);
    printf("Nhap so luong: ");
    scanf("%d", &(sp->soLuong));
    printf("Nhap size (S, M, L, XL, 2XL): ");
    scanf("%s", sp->size);
    printf("Nhap gia ban (don vi trieu VND): ");
    scanf("%f", &(sp->giaBan));
}

void inSanPham(SanPham *sp) {
    printf("%s %-10d %-10s %-10.2f\n", sp->ten, sp->soLuong, sp->size, sp->giaBan);
}

void sapXepTheoSoLuong(SanPham *ds, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (ds[i].soLuong < ds[j].soLuong) {
                SanPham temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void timKiemTheoSizeVaGia(SanPham *ds, int n, char* size, float G1, float G2) {
    printf("STT %-10sTen san pham %-10sSo luong %-10sSize %-10sGia ban (k VND)\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].size, size) == 0 && ds[i].giaBan >= G1 && ds[i].giaBan <= G2) {
            printf("%d\t", i+1);
            inSanPham(&ds[i]);
        }
    }
}

int main() {
    int N;
    printf("Nhap so luong san pham: ");
    scanf("%d", &N);
    SanPham ds[N];
    for (int i = 0; i < N; i++) {
        nhapSanPham(&ds[i]);
    }
    printf("STT %-10sTen san pham %-10sSo luong %-10sSize %-10sGia ban (k VND)\n");
    for (int i = 0; i < N; i++) {
        printf("%d\t", i+1);
        inSanPham(&ds[i]);
    }
    sapXepTheoSoLuong(ds, N);
    printf("Danh sach sau khi sap xep theo so luong giam dan:\n");
    printf("STT %-10sTen san pham %-10sSo luong %-10sSize %-10sGia ban (k VND)\n");
    for (int i = 0; i < N; i++) {
        printf("%d\t", i+1);
        inSanPham(&ds[i]);
    }
    char size[4];
    float G1, G2;
    printf("Nhap size can tim kiem: ");
    scanf("%s", size);
    printf("Nhap gia tu G1 den G2 can tim kiem: ");
    scanf("%f %f", &G1, &G2);
    timKiemTheoSizeVaGia(ds, N, size, G1, G2);
    return 0;
}

