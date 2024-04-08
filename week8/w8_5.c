#include <stdio.h>
#include <math.h>

int main(){
    double x, sin = 0.0, term;
    int i = 0;

    printf("Nhap x: ");
    scanf("%lf", &x);

    do{
        term = pow(-1,i)*pow(x,2*i+1)/tgamma(2*i+2);
        sin+=term;
        i++;
    }while(fabs(term)>=0.0001);
    printf("Sin(%.2lf) = %.4lf\n", x, sin);
    return 0;
}

