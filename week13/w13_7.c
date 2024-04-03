#include <stdio.h>
#include <string.h>

void shift_left(char* s) {
    char first_char = s[0];
    for(int i = 0; i < strlen(s) - 1; i++) {
        s[i] = s[i + 1];
    }
    s[strlen(s) - 1] = first_char;
}

void shift_right(char* s) {
    char last_char = s[strlen(s) - 1];
    for(int i = strlen(s) - 1; i > 0; i--) {
        s[i] = s[i - 1];
    }
    s[0] = last_char;
}

int main() {
    char s[100];
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0'; // remove newline character
    printf("Chuoi ban dau: %s\n", s);
    shift_left(s);
    printf("Chuoi sau khi dich trai: %s\n", s);
    shift_right(s);
    printf("Chuoi sau khi dich phai: %s\n", s);
    return 0;
}

