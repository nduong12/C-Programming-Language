#include<stdio.h>
#include<math.h>
int main(){
    float a, b, TP, deltax, xi, Fxi;
    int N = 1001, i;
    printf("\nChuong trinh tinh tich phan!!!");
    printf("\nMoi ban nhap vao can a: ");
    scanf("%f",&a);
    printf("Moi ban nhap vao can b: ");
    scanf("%f",&b);
    //Tinh delta x
    deltax = (b-a)/N;
    TP = 0;
    i = 1;
    do{
        xi = a + (i-1)*deltax;
        Fxi = sin(xi*xi)/exp(xi);
        TP += Fxi*deltax;
        i++;
    }while(i<=N);
    printf("\nTich phan tu %.1f den %.1f cua ham sin(x^2)/e^x bang %.4f\n",a,b,TP);
    return 0;
}
