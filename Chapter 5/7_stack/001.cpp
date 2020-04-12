#include <stdlib.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> x;
    for(int i=0;i<5;i++){
        x.push(i);
    }
    cout<<x.top()<<endl;
    system("pause");
    return 0;
}
