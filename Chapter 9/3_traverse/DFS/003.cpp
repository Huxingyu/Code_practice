#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 10

using namespace std;

int n,inf=-1;
int trave[max][max];
bool inq[max]={false};
vector<int> node[max];

void DFS_matrix(int u,int index){
    inq[u]=true;
    for(int v=0;v<n;v++){
        if(inq[v]==false && trave[u][v]!=inf){
            DFS_matrix(v,index+1);
        }
    }
}

void DFS_vector(int u,int index){
    inq[u]=true;
    for(int i=0;i<node[u].size();i++){
        int temp=node[u][i];
        if(inq[temp]==false){
            DFS_vector(temp,index+1);
        }
    }
}

void DFS_trave(){
    for(int u=0;u<n;u++){
        if(inq[u]==false){
            DFS_matrix(u,1);
        }
    }
}

int main(){

    system("pause");
    return 0;
}