#include <stdio.h>
#include <string.h>

// Hàm 1: Thay thế xâu con bằng các dấu '-'
void thayTheXauCon(char a[], char b[]) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int i, j;

    for (i = 0; i <= lenA - lenB; i++) {
        // Kiểm tra xem b có phải là xâu con bắt đầu tại vị trí i của a không
        for (j = 0; j < lenB; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }

        // Nếu b là xâu con, thay thế bằng các dấu '-'
        if (j == lenB) {
            for (j = 0; j < lenB; j++) {
                a[i + j] = '-';
            }
        }
    }
}

// Hàm 2: Xóa tất cả các kí tự c trong xâu s
void xoaKyTu(char s[], char c) {
    int lenS = strlen(s);
    int i, j = 0;

    for (i = 0; i < lenS; i++) {
        if (s[i] != c) {
            s[j++] = s[i]; // Chỉ giữ lại các kí tự khác c
        }
    }
    s[j] = '\0'; // Kết thúc xâu mới
}

// Chương trình chính
int main() {
    char xau1[100], xau2[100];
    char kyTuCanXoa;

    printf("Nhap xau thu nhat: ");
    fgets(xau1, sizeof(xau1), stdin); // Nhập xâu thứ nhất bằng fgets

    // Loại bỏ ký tự newline '\n' (nếu có) do fgets thêm vào
    xau1[strcspn(xau1, "\n")] = 0; 

    printf("Nhap xau thu hai: ");
    fgets(xau2, sizeof(xau2), stdin); // Nhập xâu thứ hai bằng fgets

    // Loại bỏ ký tự newline '\n' (nếu có) do fgets thêm vào
    xau2[strcspn(xau2, "\n")] = 0;

    // Gọi hàm 1 để thay thế xâu con
    thayTheXauCon(xau1, xau2);
    printf("Ket qua cau 1: %s\n", xau1);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTuCanXoa); // Nhập kí tự cần xóa

    // Gọi hàm 2 để xóa kí tự
    xoaKyTu(xau1, kyTuCanXoa);
    printf("Ket qua cau 2: %s\n", xau1);

    return 0;
}
