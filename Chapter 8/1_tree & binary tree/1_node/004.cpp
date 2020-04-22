//查找

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
    int count=0;
    node* temp=head->next;
    while(temp!=NULL){
        if(temp->data==x){
            count++;
        }
        temp=temp->next;   
    }
    return count;
}

int main(){
    int x,num[]={1,2,3,4,5};
    node* ans=creat(num);
    while(scanf("%d",&x)!=EOF){
        int y=search(ans,x);
        printf("%d\n",y);
    }
    system("pause");
    return 0;
}