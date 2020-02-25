#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=12,b=3;
    a /= b+1;
    b %= 2;
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}