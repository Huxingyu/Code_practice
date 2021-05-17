//3. Longest Substring Without Repeating Characters

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int r=-1,ans=0,n=s.size();
        for(int i=0;i<n;i++){
            if(i>0){
                st.erase(s[i-1]);       //widows filter
            }
            while(r+1<n && st.count(s[r+1])!=true){
                st.insert(s[r+1]);
                r++;
            }
            ans=max(ans,r-i+1);
        }
        return ans;
    }
};