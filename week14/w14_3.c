#include <stdio.h>
#include <string.h>

typedef struct {
    char tenHang[21];
    char maHang[7];
    float donGia;
    int soLuongBan;
} HangHoa;

void nhap(HangHoa *hang) {
    printf("Nhap ten hang (nhap ' ' de ket thuc): ");
    fgets(hang->tenHang, 21, stdin);
    hang->tenHang[strcspn(hang->tenHang, "\n")] = 0;  // remove newline character
    if (strcmp(hang->tenHang, " ") == 0) {
        return;
    }
    printf("Nhap ma hang: ");
    fgets(hang->maHang, 7, stdin);
    hang->maHang[strcspn(hang->maHang, "\n")] = 0;  // remove newline character
    printf("Nhap don gia: ");
    scanf("%f", &hang->donGia);
    printf("Nhap so luong ban: ");
    scanf("%d", &hang->soLuongBan);
    getchar();  // remove newline character
}

void sapXep(HangHoa *hang, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(hang[i].maHang, hang[j].maHang) > 0) {
                HangHoa temp = hang[i];
                hang[i] = hang[j];
                hang[j] = temp;
            }
        }
    }
}

void in(HangHoa hang) {
    printf("%-6s %-20s %10.2f %10d %10.2f\n", hang.maHang, hang.tenHang, hang.donGia, hang.soLuongBan, hang.donGia * hang.soLuongBan);
}

int main() {
    HangHoa hang[10];
    int i = 0;
    while (1) {
        nhap(&hang[i]);
        if (strcmp(hang[i].tenHang, " ") == 0) {
            break;
        }
        i++;
    }

    sapXep(hang, i);

    printf("\n%-6s %-20s %10s %10s %10s\n", "MaHang", "TenHang", "DonGia", "SoLuong", "TongTien");
    for (int j = 0; j < i; j++) {
        if (hang[j].donGia * hang[j].soLuongBan > 500000) {
            in(hang[j]);
        }
    }

    return 0;
}

