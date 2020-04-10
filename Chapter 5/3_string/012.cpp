#include <stdio.h>
#include <stdlib.h>

void change(int &x,int &y){     //传递的是实参
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    change(x,y);
    printf("%d %d\n",x,y);
    system("pause");
    return 0;
}