//leetcode 141. Linked List Cycle

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
    bool hasCycle(ListNode *head) {
        ListNode *p=head;
        unordered_set<ListNode*> st;
        while(p!=nullptr){
            if(st.count(p)){
                return true;
            }
            st.insert(p);
            p=p->next;
        }
        return false;      
    }
};