#include <stdio.h>
int main()
{
    int stt;
    char *ngaythang[10], *tenlop[10], *tenmonhoc[30];
    char *giobatdau[6], *gioketthuc[6];
    printf("STT: ");
    scanf("%d", &stt);
    puts("Ngay thang: ");
    fflush(stdin);
    gets(ngaythang);
    puts("Ten lop: ");
    fflush(stdin);
    gets(tenlop);
    puts("Ten mon hoc: ");
    fflush(stdin);
    gets(tenmonhoc);
    puts("Bat dau: ");
    fflush(stdin);
    gets(giobatdau);
    puts("Ket thuc: ");
    fflush(stdin);
    gets(gioketthuc);
    printf("%-5s %-15s %-10s %-25s %-10s %-10s\n", "STT", "Ngay thang", "Ten lop", "Ten mon hoc", "Bat dau", "Ket thuc");
    printf("%-5d %-15s %-10s %-25s %-10s %-10s\n", stt, ngaythang, tenlop, tenmonhoc, giobatdau, gioketthuc);
    return 0;
}
