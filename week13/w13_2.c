#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ' && s[i+1] == ' ') {
            for(int j = i; j < len; j++) {
                s[j] = s[j+1];
            }
            len--;
            i--;
        }
    }
    printf("Chuoi sau khi loai bo dau cach thua: %s", s);
    return 0;
}

