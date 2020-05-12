//rework BFS

#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

struct node{
    int x,y;
}Node;

int n,m,num[max][max];
bool inq[max][max]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

//m*n matrix
bool is_right(int x,int y){
    if(x<0 || x>=n || y<0 || y>=m){
        return false;
    }
    if(num[x][y]==0 || inq[x][y]==true){
        return false;
    }
    return true;
}

void BFS(int x,int y){
    Node.x=x,Node.y=y;
    queue<node> q;
    q.push(Node);
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int newx=top.x+X[i];
            int newy=top.y+Y[i];
            if(is_right(newx,newy)==true){
                Node.x=newx,Node.y=newy;
                q.push(Node);
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
            if(inq[i][j]==false && num[i][j]==1){
                count++;
                BFS(i,j);
            }
        }
    }
    printf("%d\n",count);
    system("pause");
    return 0;
}