#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    int *p;
    p=&x;
    *p = 233;
    printf("%d\n",x);
    system("pause");
    return 0;
}