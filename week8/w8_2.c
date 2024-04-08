#include <stdio.h>

int main(){
    int n;
    do{
        printf("Nhap so nguyen n(10<n<100): ");
        scanf("%d", &n);
    }while(n<=10||n>=100);

    int tong=0;
    for(int i=1; i<=n; i++){
        int j = i;
        while(j>0){
            tong+=j%10;
            j/=10;
        }
    }
    printf("Tong cac chu so tu 1 den %d la: %d\n", n, tong);
    return 0;
}

