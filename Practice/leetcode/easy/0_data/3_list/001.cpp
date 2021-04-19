// leetcode 2. Add Two Numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        cout<<l1->val<<endl;
    }
};

int main(){
    Solution x;
    ListNode lt;
    lt
    system("pause");
    return 0;
}