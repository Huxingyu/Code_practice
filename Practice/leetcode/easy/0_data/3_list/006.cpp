//leetcode 206. Reverse Linked List

#include <iostream>
#include <cstdlib>
#include <unordered_set>
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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=head;
        ListNode *temp,*per=nullptr;
        while(p!=nullptr){
            temp=per;
            per=p;
            p=p->next;
            per->next=temp;
        }
        return per;      
    }
};