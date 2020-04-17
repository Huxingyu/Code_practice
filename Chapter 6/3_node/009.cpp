#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* next;
};

node* creat(int num[]){
    node *p,*pre,*head;
    head=new node;
    head->next=NULL;
    pre=head;
    for(int i=0;i<5;i++){
        p=new node;
        p->data=num[i];
        p->next=NULL;
        pre->next=p;
        pre=p;
    }
    return head;
}

void insert(node* head,int pos,int x){
    node* p=head;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    node* q=new node;
    q->data=x;
    q->next=p->next;
    p->next=q;
}

int main(){
    int num[]={1,2,3,4,5};
    node* ans=creat(num);
    insert(ans,6,6);
    ans=ans->next;
    while(ans!=NULL){
        printf("%d ",ans->data);
        ans=ans->next;
    }
    system("pause");
    return 0;
}