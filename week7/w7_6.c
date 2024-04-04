#include <stdio.h>
#include <math.h>

int main(){
    int n, tich = 1;
    scanf("%d", &n);

    if(n>=8){
        printf("n phai nho hon 8\n");
    } else {
        for(int i = 1; i < n; i++){
             tich *= i;
        }
        printf("%d! = %d\n", n, tich);
    }
    return 0;
}

