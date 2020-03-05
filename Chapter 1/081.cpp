#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define eps 1e-8
#define equl(a,b) (abs((a)-(b))<eps)

int main(){
    double x=3.14;
    double pi=acos(-1);
    if(equl(x,pi)){
        printf("ok");
    } 
    else{
        printf("no");
    }   
    system("pause");
    return 0;
}