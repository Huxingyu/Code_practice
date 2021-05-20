//412. Fizz Buzz

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    public:
        vector<string> ans;
        vector<string> fizzBuzz(int n) {
            for(int i=1;i<=n;i++){
                ans.push_back(cal(i));
            }
            return ans;
        }
        string cal(int x){
            if(x%3==0 && x%5==0){
                return "FizzBuzz";
            }
            if(x%3==0){
                return "Fizz";
            }
            if(x%5==0){
                return "Buzz";
            }
            string temp=to_string(x);
            return temp;
        }         
};
