//search,insert,delete element   

#include <cstdlib>
#include <iostream>

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
        p=p->next;
    }
    return head;
}

int search(listnode *head,int x){
    int count=0;
    listnode *p=head->next;
    while(p!=nullptr){
        if(p->var==x){
            count++;
        }
        p=p->next;
    }
    return count;
}

listnode* insert(int pos,int x){
    listnode *head=creat();
    listnode *p=head;
    for(int i=0;i<pos;i++){
        p=p->next;
    }
    listnode *q=new listnode(x);
    //p->(q)->(p->next)
    q->next=p->next;
    p->next=q;
    return head;
} 

void del_list(listnode *head,int pos){
    listnode *p=head;
    for(int i=0;i<pos;i++){
        p=p->next;
    }
    listnode *q=p->next;
    p->next=q->next;
}

void del_value(listnode *head,int x){
    //must need pionter 'pre'
    listnode *pre=head;
    listnode *p=head->next;
    while(p!=nullptr){
        if(p->var==x){
            pre->next=p->next;
            delete(p);
            p=pre->next;
        }else{
            pre=p;
            p=p->next;
        }
    }
}

int main(){
    listnode *head=creat();
    listnode *p=head->next;
    while(p!=nullptr){
        cout<<p->var<<" ";
        p=p->next;
    }
    cout<<endl;

    // head=insert(0,99);
    // p=head->next;
    // while(p!=nullptr){
    //     cout<<p->var<<" ";
    //     p=p->next;
    // }
    
    // del_list(head,1);
    // p=head->next;
    // while(p!=nullptr){
    //     cout<<p->var<<" ";
    //     p=p->next;
    // }
    
    head=insert(2,99);
    p=head->next;
    while(p!=nullptr){
        cout<<p->var<<" ";
        p=p->next;
    }
    cout<<endl;
    del_value(head,4);
    p=head->next;
    while(p!=nullptr){
        cout<<p->var<<" ";
        p=p->next;
    }

    cout<<endl;
    system("pause");
    return 0;
}