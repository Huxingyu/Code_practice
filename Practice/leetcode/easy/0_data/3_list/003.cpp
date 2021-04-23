#include <iostream>
#include <cstdlib>
#include <vector>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x,y,n;
        x=list_to_int(l1);
        y=list_to_int(l2);
        n=x+y;
        ListNode *ans=int_to_list(n);
        return ans;
    }
    int list_to_int(ListNode *head){
        ListNode *p=head;
        int n,x=1,sum=0;
        while(p!=nullptr){
            n=p->val;
            n*=x;
            sum+=n;
            x*=10;
            p=p->next;
        }
        return sum;
    }
    ListNode* int_to_list(int x){
        vector<int> ans;
        if(x==0){
            ListNode *zero=new ListNode(0);
            return zero;
        }
        while(x!=0){
            ans.push_back(x%10);
            x/=10;
        }
        ListNode *head=new ListNode;
        ListNode *p=head;
        for(auto it=ans.begin();it!=ans.end();it++){
            ListNode *q=new ListNode(*it);
            p->next=q;
            p=p->next;
        }
        return head->next;
    }
};

int main(){
    // ListNode *head=new ListNode;
    // ListNode *p=head;
    // p->val=5;
    // ListNode *y=new ListNode(6);
    // p->next=y;
    // ListNode *z=new ListNode(4);
    // y->next=z;
    Solution ans;
    ListNode *head=ans.int_to_list(807);
    ListNode *p=head->next;
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
    system("pause");
    return 0;
}