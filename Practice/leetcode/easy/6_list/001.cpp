//160. Intersection of Two Linked Lists

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};

class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode *a=headA,*b=headB;
            while(headA!=headB){
                a=(a!=nullptr)?headB:a->next;
                b=(b!=nullptr)?headA:b->next;
            }
            return a;
        }
};

// class Solution {
//     public:
//         ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//             vector<ListNode*> vt;
//             while(headA!=nullptr){
//                 vt.push_back(headA);
//                 headA=headA->next;
//             }          
//             while(headB!=nullptr){
//                 if(find(vt.begin(),vt.end(),headB)!=vt.end()){
//                     vector<ListNode*>::iterator it=find(vt.begin(),vt.end(),headB);
//                     return *it;
//                 }
//                 headB=headB->next;
//             }
//             return nullptr;
//         }
// };