#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* next;
};

int main(){
    node* node1 = new node;     //定义了头指针
    node* node2 = new node;
    node* node3 = new node;
    node* node4 = new node;
    node* node5 = new node;
    node1->data=5;
    node1->next=node2;
    node2->data=3;
    node2->next=node3;
    node3->data=6;
    node3->next=node4;
    node4->data=1;
    node4->next=node5;
    node5->data=2;
    node5->next=NULL;
    node* temp=new node;
    temp = node1;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    system("pause");
    return 0;
}