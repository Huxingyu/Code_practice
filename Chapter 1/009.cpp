#include <stdio.h>
#include <stdlib.h>
#define mul(a) ((a)*2+1)
#define _mul(a) a*2+1

int main(){
    int x=1;
    printf("%d\n",mul(x+1));
    printf("%d\n",_mul(x+1));
    system("pause");
    return 0;
}