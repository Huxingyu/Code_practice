#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node{
    int data;
    node* next;
}Node;

node* creat(int num[]){
    node *head,*pre,*p;
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

int main(){
    int num[]={1,2,3,4,5};
    node* head=creat(num);
    node* ans=head->next;
    while(ans!=NULL){
        printf("%d ",ans->data);
        ans=ans->next;
    }
    printf("\n");
    system("pause");
    return 0;
}