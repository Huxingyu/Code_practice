#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> x;
    for(int i=0;i<5;i++){
        x.push(i);
    }
    printf("%d\n",x.top());
    system("pause");
    return 0;
}