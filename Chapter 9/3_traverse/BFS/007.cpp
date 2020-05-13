#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <queue>

#define max 100

using namespace std;

struct node{
    int id,layer;
};

vector<node> Adj[max];
int n,k,id,id_num;
bool inq[max]={false};

int BFS(int s,int k){
    int numForward=0;
    queue<node> q;
    node start;
    start.id=s;
    start.layer=0;
    q.push(start);
    inq[start.id]=true;
    while(!q.empty()){
        node topNode=q.front();
        q.pop();
        int u=topNode.id;
        for(int i=0;i<Adj[u].size();i++){
            node next=Adj[u][i];
            next.layer=topNode.layer+1;
            if(inq[next.id]==false && next.layer<=k){
                q.push(next);
                inq[next.id]=true;
                numForward++;
            }
        }
    }
    return numForward;
}

int main(){
    node user;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        user.id=i;
        scanf("%d",&id_num);
        for(int j=0;j<id_num;j++){
            scanf("%d",&id);
            Adj[id].push_back(user);
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<Adj[i].size();j++){
    //         printf("%d ",Adj[i][j]);
    //     }
    //     printf("\n");
    // }
    int nums,ques_num;
    scanf("%d",&nums);
    for(int i=0;i<nums;i++){
        memset(inq,false,sizeof(inq));
        scanf("%d",&ques_num);
        int ans=BFS(ques_num,k);
        printf("%d\n",ans);
    }
    system("pause");
    return 0;
}