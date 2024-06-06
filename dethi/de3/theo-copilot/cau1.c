#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Chương trình con a
void nhapXau(char *xau) {
    do {
        printf("Nhap xau co it nhat 10 ky tu chi bao gom chu so: ");
        scanf("%s", xau);
    } while (strlen(xau) < 10 || !isdigit(xau[0]));
}

// Chương trình con b
void maHoaXau(char *xau) {
    for (int i = 0; i < strlen(xau); i++) {
        if (isdigit(xau[i])) {
            int so = xau[i] - '0';
            xau[i] = 'a' + so;
        }
    }
}

// Chương trình con c
void xenKeChuHoa(char *xau) {
    for (int i = 0; i < strlen(xau); i++) {
        if (islower(xau[i])) {
            xau[i] = toupper(xau[i]);
            i++;
        }
    }
}

// Chương trình chính
int main() {
    char xau[100];
    nhapXau(xau);
    printf("Xau ma hoa o y b/: ");
    maHoaXau(xau);
    printf("%s\n", xau);
    printf("Xau nhan duoc o y c/: ");
    xenKeChuHoa(xau);
    printf("%s\n", xau);
    return 0;
}
