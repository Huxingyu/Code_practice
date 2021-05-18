//9. Palindrome Number

#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            int mid;
            if(x<0){
                return false;
            }else if(x<10){
                return true;
            }else{
                int k=0,num[100]={0};
                while(x!=0){
                    num[++k]=x%10;
                    x/=10;
                }       
                int left=1,right=k,mid=right/2;
                if(k%2==0){
                    cout<<left<<" "<<mid<<" "<<right<<endl;
                    while(left<=mid && right>=mid+1 && num[left]==num[right]){
                        if(left==mid){
                            return true;
                        }
                        left++;
                        right--;
                    }
                    return false;
                }else{
                    while(left<=mid && right>=mid+2 && num[left]==num[right]){
                        if(left==mid){
                            return true;
                        }
                        left++;
                        right--;
                    }
                    return false;
                }
            }
        }
};

int main(){
    Solution x;
    cout<<x.isPalindrome(12321)<<endl;
    system("pause");
    return 0;
}

//(1,2,3) [left,mid][mid+2,right] (1,1)(3,3)
                        //(1,2) [left,mid][mid+1,right] (1,1)(2,2)
                        //(1,2,3,4) (1,2)(3,4)
                        //(1,2,3,4,5) (1,2)(4,5)