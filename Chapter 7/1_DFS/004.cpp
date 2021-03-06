#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 10

using namespace std;

int n,k,x,max_sum=-1,A[max];
vector<int> temp,ans;

void DFS(int index,int nowk,int sum,int sum_q){
    if(nowk==k && sum==x){
        if(sum_q>max_sum){
            max_sum=sum_q;
            ans=temp;
        }
        return;
    }
    if(nowk>k || sum>x || index==n){
        return;
    }
    temp.push_back(A[index]);
    DFS(index+1,nowk+1,sum+A[index],sum_q+A[index]*A[index]);
    temp.pop_back();
    DFS(index+1,nowk,sum,sum_q);
}

int main(){
    scanf("%d %d %d",&n,&k,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    DFS(0,0,0,0);
    vector<int>::iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        printf("%d ",*it);
    }
    system("pause");
    return 0;
}

//自己看着书上写的
