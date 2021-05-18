//344. Reverse String

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<char> ans;
        void reverseString(vector<char>& s) {
            int n=s.size();
            for(int i=n-1;i>=0;i--){
                ans.push_back(s[i]);
            }            
            s=ans;
        }
};