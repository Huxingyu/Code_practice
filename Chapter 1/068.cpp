#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10]={1,1};
    int *p=x;
    for(int i=0;i<10;i++){
        printf("%d\n",*(p+i));
    }
    printf("%d\n",x);
    system("pause");
    return 0;
}