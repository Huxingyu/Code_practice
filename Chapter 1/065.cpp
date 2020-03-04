#include <stdio.h>
#include <stdlib.h>

int Fab(int x){
    if(x==0){
        return 1;;
    }
    else{
        return Fab(x-1)*x;
    }
}

int main(){
    int x;
    scanf("%d",&x);
    int y=Fab(x);
    printf("%d\n",y);
    system("pause");
    return 0;
}