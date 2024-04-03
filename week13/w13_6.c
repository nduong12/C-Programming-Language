#include <stdio.h>
#include <string.h>

void encode(char* s, int k) {
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + (s[i] - 'a' + k) % 26;
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + (s[i] - 'A' + k) % 26;
        }
    }
}

void decode(char* s, int k) {
    encode(s, 26 - k);
}

int main() {
    char s[100];
    int k;
    printf("Nhap vao mot doan van ban: ");
    fgets(s, sizeof(s), stdin);
    printf("Nhap vao gia tri buoc dich chuyen: ");
    scanf("%d", &k);
    printf("Doan van ban ban dau: %s", s);
    encode(s, k);
    printf("Doan van ban sau khi ma hoa: %s", s);
    decode(s, k);
    printf("Doan van ban sau khi giai ma: %s", s);
    return 0;
}

