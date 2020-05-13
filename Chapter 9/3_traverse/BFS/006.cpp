//v0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <vector>
#define max 10

using namespace std;

struct node{
    int id;
    int layer;
};

vector<node> vt[max];
int n,k,id,id_num;
bool inq[max]={false};

int BFS(int s,int k){
    int count=0;
    queue<node> q;
    node start;
    start.id=s;
    start.layer=0;
    q.push(start);
    inq[s]=true;
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        int test=top.id;
        for(int i=0;i<vt[top.id].size();i++){
            node next=vt[top.id][i];
            next.layer=start.layer+1;
            if(inq[next.id]==false && next.layer<=k){
                q.push(next);
                inq[next.id]=true;
                count++;
            }
        }
    }
    return count;
}

int main(){
    node user;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        user.id=i;
        scanf("%d",&id_num);
        for(int j=0;j<id_num;j++){
            scanf("%d",&id);
            vt[id].push_back(user);
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<vt[i].size();j++){
    //         printf("%d ",vt[i][j]);
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