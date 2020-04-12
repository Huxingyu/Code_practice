//priority 基本元素的优先级设置

#include <stdlib.h>
#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> x;
    for(int i=0;i<5;i++){
        x.push(i);
    }
    cout<<x.top()<<endl;
    priority_queue<int,vector<int>,less<int>> y;
    for(int i=0;i<5;i++){
        y.push(i);
    }
    cout<<y.top()<<endl;
    system("pause");
    return 0;
}