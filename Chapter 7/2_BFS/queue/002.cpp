#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

struct node{
    int data;
}a[10];

int main(){
    queue<node> q;
    for(int i=1;i<=3;i++){
        a[i].data=i;
        q.push(a[i]);
    }
    //错误用法
    q.front().data=10;
    printf("%d %d %d\n",a[1].data,a[2].data,a[3].data);
    //正确用法
    a[q.front()].data=10;
    printf("%d %d %d\n",a[1].data,a[2].data,a[3].data);
    system("pause");
    return 0;
}