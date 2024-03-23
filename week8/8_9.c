#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    char cont;

    do {
        printf("1. Cong\n2. Tru\n3. Nhan\n4. Chia\n");
        printf("Moi ban chon phep tinh: ");
        scanf("%d", &choice);

        printf("Nhap so thu nhat: ");
        scanf("%lf", &num1);
        printf("Nhap so thu hai: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Khong the chia cho 0!\n");
                    continue;
                }
                break;
            default:
                printf("Lua chon khong hop le!\n");
                continue;
        }

        printf("Ket qua: %.2lf\n", result);

        printf("Ban co muon tiep tuc? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    return 0;
}

