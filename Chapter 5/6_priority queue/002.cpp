#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> q;
    q.push(2);
    q.push(3);
    q.push(1);
    printf("%d\n",q.top());
    q.pop();
    printf("%d\n",q.top());
    system("pause");
    return 0;
}