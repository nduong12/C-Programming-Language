#include <stdio.h>
#include <string.h>

// Chương trình con thứ nhất
void replaceSubstring(char* a, char* b) {
    char* pos = strstr(a, b);
    while (pos != NULL) {
        memset(pos, '-', strlen(b));
        pos = strstr(a, b);
    }
}

// Chương trình con thứ hai
void removeChar(char* s, char c) {
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

    replaceSubstring(a, b);
    printf("Kết quả câu 1/: %s\n", a);

    removeChar(a, '-');
    printf("Kết quả câu 2/: %s\n", a);

    return 0;
}

