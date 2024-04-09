//Một số bài tập về con trỏ trong ngôn ngữ lập trình C:

//1. **Cộng hai số bằng cách sử dụng con trỏ**:

#include <stdio.h>

void add(int* a, int* b, int* sum) {
    *sum = *a + *b;
}

int main() {
    int a = 5, b = 3, sum;
    add(&a, &b, &sum);
    printf("Tổng của %d và %d là: %d\n", a, b, sum);
    return 0;
}

//2. **Tráo đổi hai giá trị bằng cách sử dụng con trỏ**:

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 3;
    printf("Trước khi tráo đổi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi tráo đổi: a = %d, b = %d\n", a, b);
    return 0;
}


//3. **Tính tổng giá trị các phần tử trong mảng bằng cách sử dụng con trỏ**:

#include <stdio.h>

int sum(int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Tổng giá trị các phần tử trong mảng là: %d\n", sum(arr, size));
    return 0;
}

//4. **Tìm độ dài chuỗi bằng cách sử dụng con trỏ**:


#include <stdio.h>

int length(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[] = "Hello, world!";
    printf("Độ dài của chuỗi \"%s\" là: %d\n", str, length(str));
    return 0;
}
