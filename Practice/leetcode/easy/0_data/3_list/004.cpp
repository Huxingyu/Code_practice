// leetcode 21. Merge Two Sorted Lists

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> ans;
        while(l1!=nullptr){
            ans.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=nullptr){
            ans.push_back(l2->val);
            l2=l2->next;
        }
        sort(ans.begin(),ans.end());
        ListNode *head=new ListNode;
        ListNode *p=head;
        for(int i=0;i<ans.size();i++){
            ListNode *q=new ListNode(ans[i]);
            p->next=q;
            p=p->next;
        }
        return head->next;
    }
};