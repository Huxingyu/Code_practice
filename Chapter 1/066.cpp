#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int *x=&a;
    a=233;
    printf("%d %d\n",x,&a);
    system("pause");
    return 0;
}