#include <stdio.h>
#include <stdlib.h>

struct point{
    int x,y;
    point(){}
    point(int _x,int _y){
        x=_x;
        y=_y;
    }
};

int main(){
    point z[10];   
    for(int i=0;i<10;i++){
        z[i].x=i;
        z[i].y=i;
    }
    for(int i=0;i<10;i++){
        printf("[%d,%d]\n",z[i].x,z[i].y);
    }
    system("pause");
    return 0;
}