#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x = 3.14;
    printf("%.0f %.0f\n",floor(x),ceil(x));     //这儿仍旧得是.f
    system("pause");
    return 0;
}