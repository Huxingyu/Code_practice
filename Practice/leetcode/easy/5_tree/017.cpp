//559. Maximum Depth of N-ary Tree

#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
        int val;
        vector<Node*> children;
        Node(int _val):val(_val){}
        Node(int _val,vector<Node*> _children):val(_val),children(_children){}
};

class Solution {
    public:
        int maxDepth(Node* root) {
            int max=0;
        }
        void preorder(Node* root){
            if(root==nullptr){
                return;
            }
            for(Node* child:root->children){
                preorder(child);
            }
        }
};