#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp,a=1,b=2;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}
