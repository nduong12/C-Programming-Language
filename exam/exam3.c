#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Chương trình con thứ nhất
char* nhapString() {
    char* s = malloc(100 * sizeof(char));
    int len, hasUpper, hasDigit;
    do {
        printf("Nhap string: ");
        scanf("%s", s);
        len = strlen(s);
        hasUpper = hasDigit = 0;
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) hasUpper = 1;
            if (isdigit(s[i])) hasDigit = 1;
        }
    } while (len < 6 || !hasUpper || !hasDigit || (s[0] != 'P' && s[0] != 'p'));
    return s;
}

// Chương trình con thứ hai
void thongKeKyTu(char* s) {
    int len = strlen(s);
    int letters = 0, digits = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) letters++;
        if (isdigit(s[i])) digits++;
    }
    printf("String co %d chu cai, %d so\n", letters, digits);
}

// Chương trình con thứ ba
void xoaKyTuDacBiet(char* s) {
    int len = strlen(s);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalnum(s[i])) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

// Chương trình chính
int main() {
    char* s = nhapString();
    thongKeKyTu(s);
    xoaKyTuDacBiet(s);
    printf("String sau khi xoa ky tu dac biet: %s\n", s);
    free(s);
    return 0;
}

