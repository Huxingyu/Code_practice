#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int n,m;
char num[max][max];
bool inq[max][max]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

struct node{
    int x,y,step;
    node* next;
}Node,S,T;

bool is_right(int x,int y){
    if(x<0 || x>=n || y<0 || y>=m){
        return false;
    }
    if(num[x][y]=='*' || inq[x][y]==true){
        return false;
    }
    return true;
}

int BFS(){
    queue<node> q;
    q.push(S);
    inq[S.x][S.y]=true;
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        if(top.x==T.x && top.y==T.y){
            return top.step;
        }
        for(int i=0;i<4;i++){
            int newx=top.x+X[i];
            int newy=top.y+Y[i];
            if(is_right(newx,newy)==true){
                inq[newx][newy]=true;
                Node.x=newx,Node.y=newy;
                Node.step=top.step+1;
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
            num[i][j]=getchar();
        }
        getchar();
    }
    S.x=2,S.y=2,S.step=0;
    T.x=4,T.y=3;
    printf("%d\n",BFS());
    system("pause");
    return 0;
}