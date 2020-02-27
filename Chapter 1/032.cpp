#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=1,sum=0;
    do{
        sum +=n;
        n++;
    }while(n<=100);
    printf("%d",sum);
    system("pause");
    return 0;
}