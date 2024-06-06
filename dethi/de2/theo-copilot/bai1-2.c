#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Chương trình con a
void nhap(char *s) {
    int len, upper, digit;
    char first;
    do {
        printf("Nhap string: ");
        scanf("%s", s);
        len = strlen(s);
        first = s[0];
        upper = digit = 0;
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) upper = 1;
            if (isdigit(s[i])) digit = 1;
        }
    } while (len < 6 || !upper || !digit || (first != 'P' && first != 'p'));
}

// Chương trình con b
void thongKe(char *s) {
    int len = strlen(s);
    int chucai = 0, so = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) chucai++;
        if (isdigit(s[i])) so++;
    }
    printf("string co %d chu cai, %d so\n", chucai, so);
}

// Chương trình con c
void xoaKyTuDacBiet(char *s) {
    int j, n = strlen(s);
    for (int i = j = 0; i < n; i++)
        if (isalnum(s[i]))
            s[j++] = s[i];
    s[j] = '\0';
}

// Chương trình chính
int main() {
    char s[100];
    nhap(s);
    thongKe(s);
    xoaKyTuDacBiet(s);
    printf("string ket qua sau khi xoa ky tu dac biet: %s\n", s);
    return 0;
}
