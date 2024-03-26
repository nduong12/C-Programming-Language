#include<stdio.h>
int main(){
        int dd, mm, yyyy;

        printf("Ngay: ");
        scanf("%d", &dd);

        printf("Thang: ");
        scanf("%d", &mm);

        printf("Nam: ");
        scanf("%d", &yyyy);
        printf("%02d/%02d/%04d\n", dd, mm, yyyy);
        return 0;
}

