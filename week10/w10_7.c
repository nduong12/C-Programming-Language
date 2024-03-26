#include <stdio.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void inMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapXepTang(int n, int array[]) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}

void sapXepGiam(int n, int array[]) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}

int main() {
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);
    int array[n];
    nhapMang(n, array);
    int choice;
    printf("Chọn phương thức sắp xếp:\n1. Tăng dần\n2. Giảm dần\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            sapXepTang(n, array);
            printf("Mảng sau khi sắp xếp tăng dần: ");
            inMang(n, array);
            break;
        case 2:
            sapXepGiam(n, array);
            printf("Mảng sau khi sắp xếp giảm dần: ");
            inMang(n, array);
            break;
        default:
            printf("Lựa chọn không hợp lệ!\n");
    }
    return 0;
}

