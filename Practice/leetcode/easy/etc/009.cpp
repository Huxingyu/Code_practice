//242. Valid Anagram

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            vector<int> vt1,vt2;
            if(s.size()!=t.size()){
                return false;
            }
            for(int i=0;i<s.size();i++){
                vt1.push_back(trans(s[i]));
                vt2.push_back(trans(t[i]));
            }
            sort(vt1.begin(),vt1.end());
            sort(vt2.begin(),vt2.end());
            for(int i=0;i<vt1.size();i++){
                if(vt1[i]!=vt2[i]){
                    return false;
                } 
            }
            return true;
        }
        int trans(char x){
            int temp=(x-'a');
            return temp;
        }
};

int main(){
    Solution x;
    cout<<x.trans('z')<<endl;
    system("pause");
    return 0;
}