#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    stack<int> x;
    queue<int> y;
    for(int i=0;i<5;i++){
        x.push(i);
        y.push(i);
    }
    cout<<x.top()<<endl;
    cout<<y.front()<<" "<<y.back()<<endl;
    system("pause");
    return 0;
}