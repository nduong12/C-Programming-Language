#include <stdio.h>

double* maximum(double* a, int size) {
    if (size == 0) {
        return NULL;
    }
    double* max_ptr = a;
    for(int i = 1; i < size; i++) {
        if(a[i] > *max_ptr) {
            max_ptr = &a[i];
        }
    }
    return max_ptr;
}

int main() {
    double arr[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    int size = sizeof(arr) / sizeof(arr[0]);
    double* max_ptr = maximum(arr, size);
    if (max_ptr != NULL) {
        printf("Giá trị lớn nhất trong mảng là: %.2f\n", *max_ptr);
    } else {
        printf("Mảng trống.\n");
    }
    return 0;
}

