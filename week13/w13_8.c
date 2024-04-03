#include <stdio.h>
#include <string.h>

void count_frequency(char* s, char c) {
    int count = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == c) {
            count++;
        }
    }
    printf("Ki tu '%c' xuat hien %d lan trong chuoi.\n", c, count);
}

int main() {
    char s[100];
    char c;
    printf("Nhap vao mot doan van ban: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap vao ki tu can dem tan suat: ");
    scanf("%c", &c);
    count_frequency(s, c);
    return 0;
}

