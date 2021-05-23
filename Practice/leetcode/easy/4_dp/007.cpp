//5. Longest Palindromic Substring 

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Solution {
    public:
        string longestPalindrome(string s) {
            int n=s.size();
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    if(s[j]!=s[i]){
                        continue;
                    }
                    
                }
            }
        }
};