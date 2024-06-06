#include <stdio.h>
#include <string.h>
#include <ctype.h>

// CĐR 1.2: Sử dụng thư viện string.h để xử lý chuỗi
// CĐR 2.3: Tạo chương trình con (hàm) để giải quyết bài toán

// Hàm (a): Nhập chuỗi thỏa mãn điều kiện
void nhapChuoi(char str[]) {
    int coChuHoa = 0, coChuSo = 0, doDaiHopLe = 0;

    do {
        printf("Nhap chuoi (bat dau bang P/p, >= 6 ky tu, co it nhat 1 chu hoa va 1 so): ");
        fgets(str, 100, stdin); // Giới hạn tối đa 99 ký tự
        str[strcspn(str, "\n")] = 0; // Loại bỏ ký tự '\n'

        int len = strlen(str);
        doDaiHopLe = (len >= 6);
        if (doDaiHopLe && (str[0] == 'P' || str[0] == 'p')) {
            for (int i = 0; i < len; i++) {
                if (isupper(str[i])) coChuHoa = 1;
                if (isdigit(str[i])) coChuSo = 1;
            }
        }
    } while (!doDaiHopLe || !coChuHoa || !coChuSo);
}

// Hàm (b): Thống kê chữ cái và số
void thongKe(const char str[]) {
    int soChuCai = 0, soChuSo = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) soChuCai++;
        else if (isdigit(str[i])) soChuSo++;
    }

    printf("Chuoi co %d chu cai va %d chu so.\n", soChuCai, soChuSo);
}

// Hàm (c): Xóa ký tự đặc biệt
void xoaKyTuDacBiet(char str[]) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {  // Chỉ giữ lại chữ cái và số
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Kết thúc chuỗi mới
}

// Chương trình chính (d)
int main() {
    char str[100];

    nhapChuoi(str);
    thongKe(str);
    xoaKyTuDacBiet(str);

    printf("Chuoi sau khi xoa ky tu dac biet: %s\n", str);

    return 0;
}
