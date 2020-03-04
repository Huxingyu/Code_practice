#include <stdio.h>
#include <stdlib.h>

int run(int x){
    return x*x;
}

int main ()
{
    int x;
    scanf("%d",&x);
    int y = run(x);
    printf("%d\n",y);
    system("pause");
    return 0;
}