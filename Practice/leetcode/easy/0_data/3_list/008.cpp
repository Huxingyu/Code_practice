//203. Remove Linked List Elements

#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};

class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode *temp=new ListNode(0);
            temp->next=head;
            ListNode *p=head;   //maybe problem in there
            ListNode *pre=temp;
            while(p!=nullptr){
                if(p->val==val){
                    pre->next=p->next;
                    delete(p);
                    p=pre->next;
                }else{
                    pre=p;
                    p=p->next;
                }
            }
            return temp->next;
        }
};

int main(){
    ListNode *head=new ListNode(1);
    ListNode *b=new ListNode(2);
    ListNode *c=new ListNode(3);
    ListNode *d=new ListNode(4);
    ListNode *e=new ListNode(5);
    head->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Solution x;
    ListNode* ans=x.removeElements(head,1);
    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    system("pause");
    return 0;
}