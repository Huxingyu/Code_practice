#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define max 10

using namespace std;

class queue{
    public:
        void init();
        void clear();
        int size();
        bool empty();
        void push(int x);
        void pop();
        int get_front();
        int get_rear();
    private:
        int front;
        int rear;
        int num[max];
};

void queue::init(){
    front=rear=-1;
}

void queue::clear(){
    front=rear=-1;
}

bool queue::empty(){
    if(front==rear){
        return true;
    }
    else{
        return false;
    }
}

int queue::size(){
    return rear-front;
}

void queue::push(int x){
    num[++rear]=x;
}

void queue::pop(){
    front++;
}

int queue::get_front(){
    return num[front+1];        //++是改变了它自身，而+1不是
}

int queue::get_rear(){
    return num[rear];
}

// int main(){
//     queue x;
//     x.init();
//     for(int i=0;i<5;i++){
//         x.push(i);
//     }
//     cout<<x.get_front()<<x.get_rear()<<endl;
//     if(x.empty()!=true){
//         x.pop();
//     }
//     cout<<x.get_front()<<x.get_rear()<<endl;
//     cout<<x.size()<<endl;
//     system("pause");
//     return 0;
// }