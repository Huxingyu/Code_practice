#include <stdio.h>
#include <stdlib.h>

int run(int x){
    x=x+1;
    return x;
}

int main ()
{
    int x=10;
    int y=run(x);
    printf("%d %d\n",x,y);
    system("pause");
    return 0;
}