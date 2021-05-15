#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Node{
    public:
        int val;
        vector<Node*> children;
        Node():val(0){}
        Node(int x,vector<Node*> children):val(x),children(children){}
};

class Solution {
    public:
        int maxDepth(Node* root) {
            return cal(root);
        }
        int cal(Node* root){
            int ans=0;
            if(root==nullptr){
                return 0;
            }
            for(Node* child:root->children){
                int x=cal(child);
                ans=max(x,ans);
            }
            return ans+1;
        }
};