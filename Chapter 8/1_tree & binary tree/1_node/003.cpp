//插入

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
    node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    node* mid=new node;
    mid->data=x;
    mid->next=temp->next;
    temp->next=mid;
}

int main(){
    int num[5]={1,2,3,4,5};
    node* ans=creat(num);
    insert(ans,2,233);
    ans=ans->next;
    while(ans!=NULL){
        printf("%d ",ans->data);
        ans=ans->next;
    }
    printf("\n");
    system("pause");
    return 0;
}