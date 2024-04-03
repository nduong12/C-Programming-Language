#include <stdio.h>

void daoNguocChiSo(int arr[], int size) {
    int i, j, tmp;
    i = 0;
    j = size - 1;
    while (i < j) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
}
void daoNguocConTro(int *arr, int size) {
    int i, j, tmp;
    i = 0;
    j = size - 1;
    while (i < j) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    daoNguocChiSo(arr, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    daoNguocConTro(arr, size);
    for(int i = 0; i < size; i++) {
	    printf("%d ", arr[i]);
    }
    return 0;
}

