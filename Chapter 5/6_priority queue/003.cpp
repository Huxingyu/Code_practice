#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    if(q.empty()!=true){
        printf("%d\n",q.size());
    }
    system("pause");
    return 0;
}