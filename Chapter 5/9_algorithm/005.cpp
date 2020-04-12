#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct book{
    int x,y;
};

bool cmp(book me,book you){
    if(me.x!=you.x){
        return me.x>you.x;
    }
    else{
        return me.y<you.y;
    }
}

int main(){
    book x[2];
    x[0].x=0,x[0].y=2;
    x[1].x=1,x[1].y=3;
    sort(x,x+2,cmp);
    for(int i=0;i<2;i++){
        printf("%d %d\n",x[i].x,x[i].y);
    }
    x[0].x=1,x[0].y=20;
    x[1].x=1,x[1].y=3;
    sort(x,x+2,cmp);
    for(int i=0;i<2;i++){
        printf("%d %d\n",x[i].x,x[i].y);
    }
    system("pause");
    return 0;
}