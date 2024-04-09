#include <stdio.h>

// Hàm để tính tổng các số lẻ trong mảng
int sumOdd(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Tổng các số lẻ trong mảng là: %d\n", sumOdd(arr, size));
    return 0;
}

