#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int n,m,num[max][max];
bool inq[max][max]={0};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

struct node{
    int x,y;
}Node;

bool judge(int x,int y){
    if(x<0 || x>=n || y<0 || y>=m) return false;
    if(num[x][y]==0 || inq[x][y]==true) return false;
    return true;
}

void BFS(int x,int y){
    queue<node> q;
    Node.x=x,Node.y=y;
    q.push(Node);
    inq[x][y]=true;
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int newx=top.x+X[i];                //x,y的值是变化的,不用递归，用队列top
            int newy=top.y+Y[i];
            if(judge(newx,newy)==true){
                Node.x=newx,Node.y=newy;        //这两句还得做，看while()位置
                q.push(Node);
                //BFS(newx,newy);               //BFS不用递归，而是队列
                inq[newx][newy]=true;
            }
        }
    }
}

int main(){
    n=6,m=7;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&num[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(num[i][j]==1 && inq[i][j]==false){
                count++;
                BFS(i,j);
            }
        }
    }
    printf("%d\n",count);
    system("pause");
    return 0;
}