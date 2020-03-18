#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct node{
    int x,y;
    node(){};
    node(int _x,int _y){
        x = _x;
        y = _y;
    }
}go[10];

bool cmp(node a,node b){
    return a.x>b.x;
}

int main(){
    int num=0;
    for(int i=0;i<4;i++){
            go[num++]=node(i,4-i);
    }
    sort(go,go+4,cmp);
    for(int i=0;i<4;i++){
        printf("%d %d\n",go[i].x,go[i].y);
    }
    system("pause");
    return 0;
}

