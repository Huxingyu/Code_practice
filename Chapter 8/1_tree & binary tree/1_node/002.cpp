//删除

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

void delet(node* head,int x){
    node* pre=head;
    node* temp=head->next;
    while(temp!=NULL){
        if(temp->data==x){
            pre->next=temp->next;
            delete(temp);
            temp=pre->next;     //notice
        }else{
            pre=temp;
            temp=temp->next;
        }
    }
}

int main(){
    int num[5]={1,2,3,4,5};
    node* ans=creat(num);
    delet(ans,2);
    ans=ans->next;
    while(ans!=NULL){
        printf("%d ",ans->data);
        ans=ans->next;
    }
    printf("\n");
    system("pause");
    return 0;
}