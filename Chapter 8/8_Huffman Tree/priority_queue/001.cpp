#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,greater<int> > q;

int main(){
    int n,temp,x,y,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        q.push(temp);
    }
    while(q.size()>1){
        x=q.top();
        q.pop();
        y=q.top();
        q.pop();
        q.push(x+y);
        ans+=x+y;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}