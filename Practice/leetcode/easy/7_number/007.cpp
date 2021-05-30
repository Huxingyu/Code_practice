//69. Sqrt(x)

#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        int mySqrt(int x) {             
            double left=0,right=x;
            double mid;
            mid=(left+right)/2;         
            while(mid*mid-x<0 || mid*mid-x>=1){
                if(mid*mid-x>=1){
                    cout<<"a ";
                    right=mid;
                    mid=(left+right)/2;
                }else{
                    cout<<"b ";
                    left=mid;
                    mid=(left+right)/2;
                }
            }
            return mid;
        }
};

int main(){
    Solution x;
    cout<<x.mySqrt(1024)<<endl;
    system("pause");
    return 0;
}