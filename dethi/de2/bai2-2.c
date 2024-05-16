#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[11];
    int soluong;
    char size[4];
    float giaban;
} SanPham;

void nhap(SanPham *sp) {
    printf("Nhap ten san pham: ");
    scanf("%s", sp->ten);
    printf("Nhap so luong: ");
    scanf("%d", &sp->soluong);
    printf("Nhap size (1: S, 2: M, 3: L, 4: XL, 5: 2XL): ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1: strcpy(sp->size, "S"); break;
        case 2: strcpy(sp->size, "M"); break;
        case 3: strcpy(sp->size, "L"); break;
        case 4: strcpy(sp->size, "XL"); break;
        case 5: strcpy(sp->size, "2XL"); break;
    }
    printf("Nhap gia ban: ");
    scanf("%f", &sp->giaban);
}

void in(SanPham *sp, int n) {
    printf("STT\tTen san pham\tSo luong\tSize\tGia ban (k VND)\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%d\t%s\t%.2f\n", i+1, sp[i].ten, sp[i].soluong, sp[i].size, sp[i].giaban);
}

void sapXep(SanPham *sp, int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (sp[i].soluong < sp[j].soluong) {
                SanPham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
}

void timKiem(SanPham *sp, int n, char *size, float G1, float G2) {
    printf("STT\tTen san pham\tSo luong\tSize\tGia ban (k VND)\n");
    for (int i = 0; i < n; i++)
        if (strcmp(sp[i].size, size) == 0 && sp[i].giaban >= G1 && sp[i].giaban <= G2)
            printf("%d\t%s\t%d\t%s\t%.2f\n", i+1, sp[i].ten, sp[i].soluong, sp[i].size, sp[i].giaban);
}

int main() {
    int N;
    printf("Nhap so luong san pham: ");
    scanf("%d", &N);
    SanPham sp[N];
    for (int i = 0; i < N; i++) {
        printf("Nhap thong tin san pham thu %d:\n", i+1);
        nhap(&sp[i]);
    }
    printf("Danh sach san pham:\n");
    in(sp, N);
    sapXep(sp, N);
    printf("Danh sach san pham sau khi sap xep:\n");
    in(sp, N);
    char size[4];
    float G1, G2;
    printf("Nhap size can tim: ");
    scanf("%s", size);
    printf("Nhap gia tu G1 den G2: ");
    scanf("%f%f", &G1, &G2);
    printf("Danh sach san pham thoa man:\n");
    timKiem(sp, N, size, G1, G2);
    return 0;
}
