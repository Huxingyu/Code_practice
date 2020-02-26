#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=2;
    switch (a+b)
    {
    case 1:
        printf("%d",a);
        break;
    case 2:
        printf("%d",b);
        break;
    case 3:
        printf("%d",a+b);
        break;
    default:
        printf("HUHU");
    }
    system("pause");
    return 0;
}