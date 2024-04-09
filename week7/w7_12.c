#include<stdio.h>
//#include<math.h>
int main(){
    int i;
    float sopi = 0;
    
    for(i=0;i<1000;i++)
        //sopi += pow(1,i)/(2*i+1);
        if(i%2 == 0) sopi += 1.0/(2*i+1);
        else sopi -= 1.0/(2*i+1);
    
    printf("\nSo pi tinh duoc: %f\n",4*sopi);
    return 0;
}
