#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    printf("%d %d\n",q.front(),q.back());
    system("pause");
    return 0;
}

//queue->受限制的数据结构