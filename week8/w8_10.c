#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double x;
    char cont;

    do {
        printf("1. So pi\n2. So e\n3. sin(x)\n");
        printf("Moi ban chon phep tinh: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("So pi = %.15lf\n", M_PI);
                break;
            case 2:
                printf("So e = %.15lf\n", M_E);
                break;
            case 3:
                printf("Nhap gia tri x: ");
                scanf("%lf", &x);
                printf("sin(%.2lf) = %.15lf\n", x, sin(x));
                break;
            default:
                printf("Lua chon khong hop le!\n");
                continue;
        }

        printf("Ban co muon tiep tuc? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    return 0;
}

