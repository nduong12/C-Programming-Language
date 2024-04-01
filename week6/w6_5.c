#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x, x1, x2;
    printf("Nhap vao 3 so a, b, c cua phuong trinh ax^2 + bx + c = 0 : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b != 0) {
            printf("Phuong trinh co mot nghiem duy nhat: x = %f", -c/b);
        } 
        else {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem");
            } 
            else {
                printf("Phuong trinh vo nghiem");
            }
        }
    } 
    else {
        delta = b*b - 4*a*c;
        x = -b/(2*a);
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if (delta < 0) {
            printf("Phuong trinh vo nghiem");
        } 
        else if (delta == 0) {
            printf("Phuong trinh co nghiem kep x = %f", x);
        } 
        else {
            printf("Phuong trinh co hai nghiem phan biet: x1 = %f va x2 = %f", x1, x2);
        }
    }
    return 0;
}

