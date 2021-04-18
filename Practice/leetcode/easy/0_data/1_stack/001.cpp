#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

class MinStack {
public:
    MinStack() {}
    
    bool is_it=true;
    int min,pos=0,stack[30000],mins[30000];

    void push(int val){
        stack[++pos]=val;
        if(is_it || pos==1){
            min=stack[pos];
            is_it=false;
        }
        min=(val<min)?val:min;
        mins[pos]=min;        
    }

    void pop(){
        if(mins[pos]==min){
            min=mins[pos-1];
        }
        pos--;
    }
    
    int top(){
        return stack[pos];
    }
    
    int getMin(){
        return mins[pos];
    }
};

int main(){
    MinStack *x=new MinStack;
    x->push(3);
    x->push(2);
    x->push(1);
    cout<<x->getMin()<<endl;
    x->pop();
    cout<<x->getMin()<<endl;
    x->push(4);
    cout<<x->getMin()<<endl;
    system("pause");
    return 0;
}