#include <stdio.h>
#include <string.h>

// Chương trình con 1
void replace_substring(char *a, char *b) {
    char *pos = strstr(a, b);
    while (pos != NULL) {
        memset(pos, '-', strlen(b));
        pos = strstr(a, b);
    }
}

// Chương trình con 2
void remove_char(char *s, char c) {
    int j, n = strlen(s);
    for (int i=j=0; i<n; i++)
       if (s[i] != c)
          s[j++] = s[i];
    s[j] = '\0';
}

// Chương trình chính
int main() {
    char a[] = "abcdefghikdefghxy";
    char b[] = "defgh";
    char c = '-';

    // Gọi chương trình con 1
    replace_substring(a, b);
    printf("Kết quả câu 1/: %s\n", a);

    // Gọi chương trình con 2
    remove_char(a, c);
    printf("Kết quả câu 2/ nếu xóa dấu ‘-‘: %s\n", a);

    return 0;
}
