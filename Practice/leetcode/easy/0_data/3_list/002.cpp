//翻转链表

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

listnode* creat(){
    listnode *head=new listnode;
    listnode *p=head;
    for(int i=1;i<=5;i++){
        listnode *q=new listnode(i);
        p->next=q;
        p=q;
    }
    return head;
}

listnode *fanzhuan(listnode *head){

}

int main(){
    listnode *head=creat();
    listnode *p=head->next;
    while(p!=nullptr){
        cout<<p->var<<" ";
        p=p->next;
    }
    system("pause");
    return 0;
}