#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int n,m,sym[max][max];
bool inq[max][max]={0};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

struct node{
    int x,y;
    int step;
}S,T,Node;

bool judge(int x,int y){
    if(x<0 || x>=n || y<0 || y>=m) return false;
    if(sym[x][y]=='*' || inq[x][y]==true) return false;
    return true;
}

int BFS(){
    queue<node> q;
    q.push(S);
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        if(top.x==T.x && top.y==T.y){
            return top.step;
        }
        for(int i=0;i<4;i++){
            int newx=top.x+X[i];
            int newy=top.y+Y[i];
            if(judge(newx,newy)==true){
                Node.x=newx,Node.y=newy;    //q\Node is diffrent
                inq[newx][newy]=true;
                Node.step=top.step+1;
                q.push(Node);
            }
        }
    }
    return -1;          //如果直接过不去
}

int main(){
    n=5,m=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sym[i][j]=getchar();            
        }
        getchar();
    }
    S.x=2,S.y=2,S.step=0;
    T.x=4,T.y=3;
    printf("%d\n",BFS());
    system("pause");
    return 0;
}