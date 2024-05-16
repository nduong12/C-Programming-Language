#include <stdio.h>
#include <string.h>

#define MAX_SAN_PHAM 100

// Cấu trúc sản phẩm
typedef struct {
    char tenSanPham[11]; // Tối đa 10 ký tự + '\0'
    int soLuong;
    char size[4]; // Tối đa 3 ký tự + '\0'
    float giaBan;
} SanPham;

// Hàm (a): Nhập thông tin sản phẩm
void nhapSanPham(SanPham *sp) {
    printf("Nhap ten san pham (toi da 10 ky tu): ");
    fgets(sp->tenSanPham, sizeof(sp->tenSanPham), stdin);
    sp->tenSanPham[strcspn(sp->tenSanPham, "\n")] = 0; // Xóa ký tự '\n'

    do {
        printf("Nhap so luong (so nguyen duong): ");
        scanf("%d", &sp->soLuong);
        getchar(); // Đọc bỏ ký tự '\n'
    } while (sp->soLuong <= 0);

    printf("Chon size:\n");
    printf("1. S\n2. M\n3. L\n4. XL\n5. 2XL\n");
    int luaChon;
    do {
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();
    } while (luaChon < 1 || luaChon > 5);
    switch (luaChon) {
        case 1: strcpy(sp->size, "S"); break;
        case 2: strcpy(sp->size, "M"); break;
        case 3: strcpy(sp->size, "L"); break;
        case 4: strcpy(sp->size, "XL"); break;
        case 5: strcpy(sp->size, "2XL"); break;
    }

    do {
        printf("Nhap gia ban (so thuc duong): ");
        scanf("%f", &sp->giaBan);
        getchar();
    } while (sp->giaBan <= 0);
}

// Hàm (b): In danh sách sản phẩm
void inDanhSach(SanPham ds[], int n) {
    printf("\nSTT\tTen san pham\tSo luong\tSize\tGia ban (k VND)\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t\t%-4s\t%.0f\n", i + 1, ds[i].tenSanPham, ds[i].soLuong, ds[i].size, ds[i].giaBan);
    }
}

// Hàm (c): Sắp xếp và tính tổng giá trị
float sapXepVaTinhTong(SanPham ds[], int n) {
    // Sắp xếp nổi bọt (bubble sort) giảm dần theo số lượng
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ds[j].soLuong < ds[j + 1].soLuong) {
                SanPham temp = ds[j];
                ds[j] = ds[j + 1];
                ds[j + 1] = temp;
            }
        }
    }

    // Tính tổng giá trị
    float tongGiaTri = 0;
    for (int i = 0; i < n; i++) {
        tongGiaTri += ds[i].soLuong * ds[i].giaBan;
    }
    return tongGiaTri;
}

// Hàm (d): Tìm kiếm theo size và giá
void timKiemTheoSizeVaGia(SanPham ds[], int n, const char *size, float g1, float g2) {
    int timThay = 0;
    printf("\nSTT\tTen san pham\tSo luong\tSize\tGia ban (k VND)\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].size, size) == 0 && ds[i].giaBan >= g1 && ds[i].giaBan <= g2) {
            printf("%d\t%-15s\t%d\t\t%-4s\t%.0f\n", i + 1, ds[i].tenSanPham, ds[i].soLuong, ds[i].size, ds[i].giaBan);
            timThay = 1;
        }
    }
    if (!timThay) {
        printf("Khong tim thay san pham nao phu hop.\n");
    }
}

// Chương trình chính (e)
int main() {
    SanPham dsSanPham[MAX_SAN_PHAM];
    int n;

    // Nhập số lượng sản phẩm
    do {
        printf("Nhap so luong san pham (N > 0): ");
        scanf("%d", &n);
        getchar(); // Đọc bỏ ký tự '\n'
    } while (n <= 0 || n > MAX_SAN_PHAM);

    // Nhập thông tin sản phẩm
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin san pham thu %d:\n", i + 1);
        nhapSanPham(&dsSanPham[i]);
    }

    // In danh sách ban đầu
    inDanhSach(dsSanPham, n);

    // Sắp xếp và in lại danh sách
    float tongGiaTri = sapXepVaTinhTong(dsSanPham, n);
    printf("\nDanh sach san pham sau khi sap xep:\n");
    inDanhSach(dsSanPham, n);
    printf("Tong gia tri san pham ton kho: %.0f k VND\n", tongGiaTri);

    // Tìm kiếm theo size và giá
    char sizeTimKiem[4];
    float g1, g2;

    printf("\nChon size tim kiem:\n");
    printf("1. S\n2. M\n3. L\n4. XL\n5. 2XL\n");
    int luaChon;
    do {
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);
        getchar();
    } while (luaChon < 1 || luaChon > 5);
    switch (luaChon) {
        case 1: strcpy(sizeTimKiem, "S"); break;
        case 2: strcpy(sizeTimKiem, "M"); break;
        case 3: strcpy(sizeTimKiem, "L"); break;
        case 4: strcpy(sizeTimKiem, "XL"); break;
        case 5: strcpy(sizeTimKiem, "2XL"); break;
    }

    do {
        printf("Nhap khoang gia (G1 <= G2): ");
        scanf("%f %f", &g1, &g2);
        getchar();
    } while (g1 > g2);

    timKiemTheoSizeVaGia(dsSanPham, n, sizeTimKiem, g1, g2);

    return 0;
}
