#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap vao ho va ten: ");
    fgets(s, sizeof(s), stdin);
    char *last_word = strrchr(s, ' ');
    printf("Phan ten trong chuoi: %s", last_word + 1);
    return 0;
}

