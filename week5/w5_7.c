#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
        float x, y, z, F;
        scanf("%f %f %f", &x, &y, &z);

        F = (x + y + sqrt(z))/(x*x + y*y + 1) - fabs(sin(x) - z*cos(y));
        printf("%f\n", F);
        return 0;
}

