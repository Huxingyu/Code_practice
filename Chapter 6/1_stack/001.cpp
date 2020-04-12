#include <stdlib.h>
#include <iostream>
#define max 10

using namespace std;

class stack{
    public:
        void init();
        void clear();
        int size();
        bool empty();
        void push(int x);
        void pop();
        int top();
    private:
        int TOP;
        int num[max];
};

void stack::init(){
    TOP=0;
}

void stack::clear(){
    TOP=-1;
}

bool stack::empty(){
    if(TOP=-1){
        return true;
    }
    else{
        return false;
    }
}

void stack::push(int x){
    num[++TOP]=x;
}

void stack::pop(){
    TOP--;
}

int stack::top(){
    return num[TOP];
}

int main(){
    stack x;
    x.init();
    for(int i=0;i<5;i++){
        x.push(i);
    }
    cout<<x.top()<<endl;
    x.pop();
    cout<<x.top()<<endl;
    system("pause");
    return 0;
}