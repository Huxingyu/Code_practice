#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

const int x=1;

int add(double x,int y){
    printf("%d\n",(int)x + y);
}

int main(){
    add(pi,x);
    system("pause");
    return 0;
}