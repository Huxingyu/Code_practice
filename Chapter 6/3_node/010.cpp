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

void del(node* head,int x){
    node* pre=head;
    node* p=head->next;
    while(p!=NULL){
        if(p->data==x){
            pre->next=p->next;
            delete(p);
            p=pre->next;
        }
        else{
            p=p->next;
            pre=pre->next;
        }
    }
}

int main(){
    int num[]={1,2,3,4,5};
    node* head=creat(num);
    del(head,6);
    head=head->next;
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    system("pause");
    return 0;
}