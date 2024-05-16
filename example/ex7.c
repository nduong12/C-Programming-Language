#include <stdio.h>

int main() {
    int num;
    printf("Nhap mot so: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("%d la so chan duong.\n", num);
        } else {
            printf("%d la so le duong.\n", num);
        }
    } else if (num < 0) {
        if (num % 2 == 0) {
            printf("%d la so chan am.\n", num);
        } else {
            printf("%d la so le am.\n", num);
        }
    } else {
        printf("So ban nhap la 0.\n");
    }

    return 0;
}
