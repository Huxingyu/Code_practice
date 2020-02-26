// /1°=π/180 rad

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi acos(-1)     

int main(){
    double x = tan(45*pi/180);
    printf("%.1f\n",x);
    system("pause");
    return 0;
}