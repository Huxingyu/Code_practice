//70. Climbing Stairs

#include <cstdlib>
#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        int ans=cal(0,n);
        return ans;
    }
    int cal(int i,int n){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        return cal(i+1,n)+cal(i+2,n);
    }
};