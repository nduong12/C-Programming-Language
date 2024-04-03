#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Nhap vao mot cau: ");
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ' && s[i+1] != ' ') {
            count++;
        }
    }
    printf("Cau co %d tu.\n", count + 1);
    return 0;
}

