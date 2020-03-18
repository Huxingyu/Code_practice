#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct node{
    int x,y;
    node(){};
    node(int _x,int _y){
        x=_x;
        y=_y;
    }
}go[5];

bool cmp(node a,node b){
    if(a.x != b.x){
        return a.x < b.x;
    }
    else{
        return a.y > b.y;
    }
}

int main(){
    go[0].x=1;
    go[1].x=1;
    go[2].x=2;
    go[3].x=3;
    go[0].y=1;
    go[1].y=2;
    go[2].y=3;
    go[3].y=4;
    sort(go,go+4,cmp);
    for(int i=0;i<4;i++){
        printf("%d| %d %d\n",i,go[i].x,go[i].y);
    }
    system("pause");
    return 0;
}