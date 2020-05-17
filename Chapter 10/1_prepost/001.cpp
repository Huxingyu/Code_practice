#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fab(int x){
    if(x==1 || x==2){
        return 1;
    }
    else{
        return fab(x-1)+fab(x-2);
    }
}

int main(){
    int x;
    clock_t start,finish;
    scanf("%d",&x);
    start=clock();
    printf("%d\n",fab(x));
    finish=clock();
    printf("%f\n",(double)(finish-start)/CLOCKS_PER_SEC);
    system("pause");
    return 0;
}