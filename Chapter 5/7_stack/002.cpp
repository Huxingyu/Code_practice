#include <stdlib.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> x;
    for(int i=0;i<5;i++){
        x.push(i);
    }
    while(x.size()!=false){
        x.pop();
    }
    cout<<x.size()<<endl;
    system("pause");
    return 0;
}
