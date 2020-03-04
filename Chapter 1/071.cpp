#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10]={1,2,3,4,5};
    printf("%d\n",a);
    printf("%d\n",&a[4]);
    printf("%d\n",(&a[4]-a));
    system("pause");
    return 0;
}