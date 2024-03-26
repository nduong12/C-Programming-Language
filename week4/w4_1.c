#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    printf("So vua nhap: %d\n", x);
    printf("Tuong ung: \\%d%%\\\"%d%%\"\\\'%d%%\'\\", x, x, x);
    return 0;
}
