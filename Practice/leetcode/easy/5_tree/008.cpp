//589. N-ary Tree travel Traversal

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Node{
    public:
        int val;
        vector<Node*> children;
        Node(){}
        Node(int _val):val(_val){}
        Node(int _val,vector<Node*> _children):val(_val),children(_children){}
}; 

class Solution {
public:
    vector<int> perorder(Node* root) {
        vector<int> ans;      
        travel(root,ans);
        return ans;
    }
    void travel(Node* root,vector<int>& ans){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);
        for(Node* child:root->children){
            travel(child,ans);
        }
    }
};