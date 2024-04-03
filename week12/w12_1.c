#include <stdio.h>

int CountEven(int* arr, int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Số các số chẵn trong mảng là: %d\n", CountEven(arr, size));
    return 0;
}

