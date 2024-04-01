#include <stdio.h>

int main()
{
    float diem;
    printf("Nhap diem so cua sinh vien: ");
    scanf("%f", &diem);  
   
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le. Vui long nhap lai!");
    } else {
        if (diem < 5) {
            printf("Hoc luc KEM");
        } else if (diem < 7) {
            printf("Hoc luc TRUNG BINH");
        } else if (diem < 8) {
            printf("Hoc luc KHA");
        } else if (diem < 9) {
            printf("Hoc luc GIOI");
        } else {
            printf("Hoc luc XUAT SAC");
        }
    }
    return 0;
}

