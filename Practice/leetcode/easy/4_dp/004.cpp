//70. Climbing Stairs

#include <cstdlib>
#include <iostream>

class Solution {
private:
    int num[50]={0};
public:
    int climbStairs(int n) {
        num[1]=1,num[2]=2;
        for(int i=3;i<=n;i++){
            num[i]=num[i-1]+num[i-2];
        }     
        return num[n];
    }
};