#include <stdio.h>
#include <math.h>

int main(){
    double epsilon, pi=0;
    int i = 0;
    printf("Nhap so epsilon: ");
    scanf("%lf", &epsilon);
    do{
        pi+=pow(-1,i)*1/(2*i+1.0);
        i++;
    }while(1/(2*i+1.0)>=epsilon);
    pi*=4;
    printf("So pi la: %.15f", pi);
    return 0;
}

