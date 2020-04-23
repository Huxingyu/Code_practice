#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int n,m;
char chr[max][max];
bool inq[max][max]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

struct node{
    int x,y,step;
}Node,S,T;

bool is_right(int x,int y){
    if(x<0 || x>=5 || y<0 || y>=5){
        return false;
    }
    if(chr[x][y]=='*' || inq[x][y]==true){
        return false;
    }
    return true;
}

int BFS(){
    queue<node> q;
    inq[S.x][S.y]=true;
    q.push(S);
    while(q.empty()!=true){
        node top=q.front();
        if(top.x==T.x && top.y==T.y){
            return top.step;
        }
        q.pop();
        for(int i=0;i<4;i++){
            int newx=top.x+X[i];
            int newy=top.y+Y[i];
            if(is_right(newx,newy)==true){
                inq[newx][newy]=true;
                Node.x=newx,Node.y=newy;
                Node.step++;
                q.push(Node);
            }
        }
    }
    return -1;
}

int main(){
    n=5,m=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            chr[i][j]=getchar();
        }
        getchar();
    }
    S.x=2,S.y=2;
    T.x=4,T.y=3;
    S.step=0;
    printf("%d\n",BFS());
    system("pause");
    return 0;
}