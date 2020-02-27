#include <stdio.h>
#include <stdlib.h>

int main(){
    int x =12345,sum=0;
    while(x){
        sum += x%10;
        x /= 10;
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}