#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 10

using namespace std;

int n,k,x,num[max],max_sumq=-1;
vector<int> temp,ans;

void DFS(int index,int now,int sum,int sum_q){
    if(now==k && sum==x){
        if(sum_q>max_sumq){
            max_sumq=sum_q;
            ans=temp;
        }
        return;
    }
    if(index==n || now>k || sum>x){
        return;
    }
    temp.push_back(num[index]);
    DFS(index+1,now+1,sum+num[index],sum_q+num[index]*num[index]);
    temp.pop_back();
    DFS(index+1,now,sum,sum_q);
}

int main(){
    scanf("%d %d %d",&n,&k,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    DFS(0,0,0,0);
    vector<int>::iterator it;
    for(it=ans.begin();it!=ans.end();it++){
        printf("%d ",*it);
    }
    printf("%d\n",max_sumq);
    system("pause");
    return 0;
}