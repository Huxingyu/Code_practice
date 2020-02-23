#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=1;
    int x = ++a;
    int y = b++;
    printf("%d %d\n",a,x);
    printf("%d %d\n",b,y);
    system("pause");
    return 0;
}