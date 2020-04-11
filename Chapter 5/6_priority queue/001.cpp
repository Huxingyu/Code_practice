#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    int x;
    scanf("%d",&x);
    priority_queue<int> q;
    for(int i=x;i>=0;i--){
        q.push(i);
    }
    printf("%d\n",q.top());
    system("pause");
    return 0;
}