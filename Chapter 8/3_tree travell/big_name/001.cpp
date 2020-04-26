#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define max 50

using namespace std;

struct node{
    int data;
    vector<int> child;
}Node[max];

int n,m,s;
int path[max];

void DFS(int index,int pathNum,int sum){
    if(sum>s) return;
    if(sum==s){
        if(Node[index].child.size()!=0) return; 
        for(int i=0;i<pathNum;i++){
            printf("%d ",Node[path[i]].data);
        }
    }
    for(int i=0;i<Node[index].child.size();i++){
        int child=Node[index].child[i];
        path[pathNum]=child;
        DFS(child,pathNum+1,sum+Node[index].data);
    }
}

int main(){
    scanf("%d %d %d",&n,&m,&s);
    for(int i=0;i<n;i++){
        scanf("%d",&Node[i].data);
    }
    int id,k,child_num;
    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&child_num);
            Node[id].child.push_back(child_num);
        }
    }
    DFS(0,1,Node[0].data);
    system("pause");
    return 0;
}