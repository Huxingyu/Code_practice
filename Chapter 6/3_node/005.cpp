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

int search(node* head,int x){
    x=0;
    head=head->next;
    while(head!=NULL){
        if(head->data==x){
            x++;
        }
        head=head->next;
    }
    printf("%d\n",x);
    return x;
}

int main(){
    int num[]={1,1,1,1,1};
    node* head=creat(num);
    node* temp;
    temp=head->next;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    int y=search(head,1);
    printf("%d\n",y);
    system("pause");
    return 0;
}