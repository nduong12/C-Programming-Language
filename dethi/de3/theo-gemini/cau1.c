#include <stdio.h>
#include <string.h>
#include <ctype.h>

// CĐR 1.2: Sử dụng thư viện string.h để xử lý chuỗi
// CĐR 2.3: Tạo chương trình con (hàm) để giải quyết bài toán

// Hàm (a): Nhập xâu chỉ bao gồm chữ số
void nhapXauChuSo(char str[]) {
    int doDaiHopLe = 0, chiChuaChuSo = 1;

    do {
        printf("Nhap xau co it nhat 10 ky tu chi bao gom chu so: ");
        fgets(str, 101, stdin); // Giới hạn tối đa 100 ký tự
        str[strcspn(str, "\n")] = 0; // Loại bỏ ký tự '\n'

        int len = strlen(str);
        doDaiHopLe = (len >= 10);

        if (doDaiHopLe) {
            for (int i = 0; i < len; i++) {
                if (!isdigit(str[i])) {
                    chiChuaChuSo = 0;
                    break;
                }
            }
        }
    } while (!doDaiHopLe || !chiChuaChuSo);
}

// Hàm (b): Mã hóa xâu thành chữ cái
void maHoa(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = 'a' + (str[i] - '0'); // Chuyển chữ số thành chữ thường
    }
}

// Hàm (c): Biến đổi xâu thành chữ hoa xen kẽ chữ thường
void bienDoiXau(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) { // Nếu là vị trí chẵn
            str[i] = toupper(str[i]); // Chuyển thành chữ hoa
        }
    }
}

// Chương trình chính (d)
int main() {
    char str[101];

    nhapXauChuSo(str);
    maHoa(str);
    printf("Xau ma hoa: %s\n", str);
    bienDoiXau(str);
    printf("Xau sau bien doi: %s\n", str);

    return 0;
}
