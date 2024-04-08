#include <stdio.h>

int main(){
    int n, i = 1;
    int giai_thua = 1;
    printf("Nhap n (n < 8): ");
    scanf("%d", &n);
    //Do...While
    /*do {
       giai_thua *= i;
       i++;
    } while (i <= n && n < 8);
    printf("%d! = %d", n, giai_thua);
    return 0;
}*/
    //While
    while (i <= n && n < 8){
        giai_thua *= i;
        i++;
    }
    printf("%d! = %d", n, giai_thua);
    return 0;

