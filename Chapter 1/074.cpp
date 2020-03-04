#include <stdio.h>
#include <stdlib.h>

void change(int &x){
    x=233;
}

int main(){
    int x=1;
    change(x);
    printf("%d\n",x);
    system("pause");
    return 0;
}