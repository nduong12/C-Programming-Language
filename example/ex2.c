#include <stdio.h>

// Hàm để đếm số âm trong mảng
int countNegative(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Số các số âm trong mảng là: %d\n", countNegative(arr, size));
    return 0;
}

