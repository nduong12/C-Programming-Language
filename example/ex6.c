//Một số bài tập về xâu kí tự trong ngôn ngữ lập trình C:

//1. **Đếm số lượng ký tự trong một chuỗi**:

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Nhập chuỗi: ");
//     fgets(str, sizeof(str), stdin); // Đọc chuỗi từ bàn phím

//     int i = 0;
//     while (str[i] != '\0') {
//         i++;
//     }

//     printf("Số lượng ký tự trong chuỗi là: %d\n", i - 1); // Trừ đi 1 cho ký tự kết thúc chuỗi '\0'
//     return 0;
// }

//2. **Kiểm tra tính đối xứng của chuỗi**:

// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char* str) {
//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             return 0; // Chuỗi không đối xứng
//         }
//     }
//     return 1; // Chuỗi đối xứng
// }

// int main() {
//     char str[100];
//     printf("Nhập chuỗi: ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str) - 1] = '\0'; // Loại bỏ ký tự xuống dòng

//     if (isPalindrome(str)) {
//         printf("Chuỗi \"%s\" là chuỗi đối xứng.\n", str);
//     } else {
//         printf("Chuỗi \"%s\" không phải là chuỗi đối xứng.\n", str);
//     }

//     return 0;
// }

//3. **Tạo xâu kí tự đầy đủ các kí tự từ a-z bằng cách xóa đi các kí tự trong xâu**:

// #include <stdio.h>
// #include <string.h>

// void createFullString(char* str) {
//     int check[26] = {0}; // Mảng kiểm tra xem ký tự đã xuất hiện hay chưa
//     int len = strlen(str);

//     for (int i = 0; i < len; i++) {
//         if ('a' <= str[i] && str[i] <= 'z') {
//             check[str[i] - 'a'] = 1;
//         } else if ('A' <= str[i] && str[i] <= 'Z') {
//             check[str[i] - 'A'] = 1;
//         }
//     }

//     int index = 0;
//     for (int i = 0; i < 26; i++) {
//         if (check[i] == 0) {
//             str[index++] = i + 'a';
//         }
//     }
//     str[index] = '\0';
// }

// int main() {
//     char str[100];
//     printf("Nhập chuỗi: ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str) - 1] = '\0'; // Loại bỏ ký tự xuống dòng

//     createFullString(str);
//     printf("Chuỗi sau khi thêm các ký tự từ a-z: %s\n", str);

//     return 0;
// }

//4. **Tính độ dài của chuỗi không dùng hàm có sẵn**:

#include <stdio.h>

int stringLength(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Nhập chuỗi: ");
    fgets(str, sizeof(str), stdin);

    printf("Độ dài của chuỗi là: %d\n", stringLength(str) - 1); // Trừ đi 1 cho ký tự xuống dòng
    return 0;
}
