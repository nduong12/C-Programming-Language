#include <stdio.h>
#include <string.h>

void replace_char(char* s, char old_char, char new_char) {
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == old_char) {
            s[i] = new_char;
        }
    }
}

int main() {
    char s[100];
    char old_char, new_char;
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap vao ki tu can thay the: ");
    scanf("%c", &old_char);
    getchar(); // remove newline character from input buffer
    printf("Nhap vao ki tu moi: ");
    scanf("%c", &new_char);
    printf("Chuoi ban dau: %s", s);
    replace_char(s, old_char, new_char);
    printf("Chuoi sau khi thay the: %s", s);
    return 0;
}

