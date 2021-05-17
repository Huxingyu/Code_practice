//206. Reverse Linked List

#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode *p=head;
            ListNode *temp,*pre=nullptr;
            while(p!=nullptr){
                temp=pre;
                pre=p;
                p=p->next;
                pre->next=temp; 
            }
            return pre;
        }
};

int main(){
    ListNode *a=new ListNode(1);
    ListNode *b=new ListNode(2);
    ListNode *c=new ListNode(3);
    ListNode *d=new ListNode(4);
    ListNode *e=new ListNode(5);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Solution x;
    ListNode* root=x.reverseList(a);
    while(root!=nullptr){
        cout<<root->val<<" ";
        root=root->next;
    }
    //cout<<root->val<<endl;
    system("pause");
    return 0;
}