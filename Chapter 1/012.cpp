#include <stdio.h>
#include <stdlib.h>

int think(int a,int b,int c){
    int x = (a>c) && (b<c);
    return x;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",think(a,b,c));
    system("pause");
    return 0;
}