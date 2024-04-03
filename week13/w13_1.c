#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ') {
            count++;
        }
    }
    printf("Chuoi co %d ki tu dau cach.\n", count);
    return 0;
}

