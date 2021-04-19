#include <iostream>
#include <cstdlib>

using namespace std;

struct listnode{
    int var;
    listnode *next;
    listnode():var(0),next(nullptr){}
    listnode(int x):var(x),next(nullptr){}
    listnode(int x,listnode *next):var(x),next(next){}
};

int main(){
    int num;
    cin>>num;
    listnode *head=new listnode(num);
    listnode *p=head;
    while(cin>>num){
        listnode *q=new listnode(num);
        p->next=q;
        p=p->next;
    }
    listnode *x=head;
    while(x!=nullptr){
        cout<<x->var<<" ";
        x=x->next;
    }
    system("pause");
    return 0;
}