#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* next;
};

node* creat(int num[]){
    node *p,*pre,*head;
    head = new node;
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
    node* ans=head->next;
    while(ans!=NULL){
        if(ans->data==x){
            count++;
        }
        ans=ans->next;
    }
    return count;
}

int main(){
    int num[]={1,1,3,4,5};
    node* ans=creat(num);
    int x=search(ans,1);
    printf("%d",x);
    system("pause");
    return 0;
}