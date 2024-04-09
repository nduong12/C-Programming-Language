//Một số bài tập về vòng lặp `while` và `do..while` trong ngôn ngữ lập trình C:

//1. Viết chương trình yêu cầu người dùng nhập vào độ dài `n` của mảng với điều kiện `n > 0`. 
//Nếu `n <= 0` thì yêu cầu nhập lại. Sử dụng vòng lặp `while` để nhập và in các giá trị trong mảng.

#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhập độ dài n của mảng (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int arr[n];
    int i = 0;
    while (i < n) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Các phần tử của mảng là: ");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

//2. Viết chương trình in ra các số lẻ từ 1 đến 10 sử dụng vòng lặp `while`¹.

#include <stdio.h>

int main() {
    int number = 1;
    while (number <= 10) {
        if (number % 2 == 1) {
            printf("%d ", number);
        }
        number++;
    }
    return 0;
}

//3. Viết chương trình nhập vào một số nguyên dương từ bàn phím và in ra số đó. Nếu nhập sai, bắt nhập lại. Sử dụng vòng lặp `do..while`¹.

#include <stdio.h>

int main() {
    int number;
    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &number);
    } while (number <= 0);
    printf("Số bạn đã nhập là: %d\n", number);
    return 0;
}
