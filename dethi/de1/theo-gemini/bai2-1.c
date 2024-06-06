#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_MAY_TINH 100

// Cấu trúc máy tính
typedef struct {
    char hang[11];  // Hãng sản xuất
    char ma[21];    // Mã máy tính
    char chip[4];   // Chip: i3, i5, i7
    int ram;        // RAM
    float gia;      // Giá bán
} MayTinh;

// Hàm nhập thông tin máy tính
void nhapMayTinh(MayTinh *mt) {
    do {
        printf("Nhap hang san xuat (toi da 10 ky tu): ");
        fgets(mt->hang, sizeof(mt->hang), stdin);
        mt->hang[strcspn(mt->hang, "\n")] = 0; // Loại bỏ \n
    } while (strlen(mt->hang) == 0 || strlen(mt->hang) > 10);

    do {
        printf("Nhap chip (i3, i5, i7): ");
        scanf("%s", mt->chip);
        getchar(); // Đọc bỏ ký tự \n còn lại
    } while (strcmp(mt->chip, "i3") != 0 && strcmp(mt->chip, "i5") != 0 && strcmp(mt->chip, "i7") != 0);

    do {
        printf("Nhap RAM (so chia het cho 4): ");
        scanf("%d", &mt->ram);
        getchar();
    } while (mt->ram % 4 != 0);

    do {
        printf("Nhap gia ban (trieu VND): ");
        scanf("%f", &mt->gia);
        getchar();
    } while (mt->gia <= 0);
}

// Hàm khởi tạo mã máy tính
void khoiTaoMa(MayTinh *mt) {
    char ramStr[5]; // Chuỗi để chứa giá trị RAM

    itoa(mt->ram, ramStr, 10); // Chuyển RAM thành chuỗi

    strcpy(mt->ma, mt->hang); // Bắt đầu mã bằng hãng
    strcat(mt->ma, ".");     // Thêm dấu chấm
    strcat(mt->ma, mt->chip); // Thêm chip
    strcat(mt->ma, ".");     // Thêm dấu chấm
    strcat(mt->ma, ramStr);   // Thêm RAM
}

// Hàm sắp xếp máy tính theo giá tăng dần
void sapXepMayTinh(MayTinh ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].gia > ds[j].gia) {
                MayTinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// Hàm in máy tính thỏa mãn điều kiện
void inMayTinh(MayTinh ds[], int n) {
    printf("\nStt - Ma - Chip - RAM - Gia\n");
    int stt = 1;
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].hang, "Asus") == 0 && 
            (strcmp(ds[i].chip, "i5") == 0 || strcmp(ds[i].chip, "i7") == 0) && 
            ds[i].ram >= 8 && ds[i].gia < 25) {
            printf("%2d - %-15s %-4s %-4d %.2f\n", stt++, ds[i].ma, ds[i].chip, ds[i].ram, ds[i].gia);
        }
    }
}

// Chương trình chính
int main() {
    MayTinh dsMayTinh[MAX_MAY_TINH];
    int n = 0;
    char tiepTuc;

    do {
        printf("\nNhap thong tin may tinh thu %d:\n", n + 1);
        nhapMayTinh(&dsMayTinh[n]);
        khoiTaoMa(&dsMayTinh[n]);
        n++;

        printf("Tiep tuc nhap (y/n)? ");
        scanf("%c", &tiepTuc);
        getchar(); // Đọc bỏ ký tự \n còn lại
    } while (tolower(tiepTuc) == 'y' && n < MAX_MAY_TINH);

    sapXepMayTinh(dsMayTinh, n);
    inMayTinh(dsMayTinh, n);

    return 0;
}
