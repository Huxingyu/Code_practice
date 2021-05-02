#include <iostream>
#include <cstdlib>
#include <vector>
#define max 10

using namespace std;

int nums[max];

int main(){
    for(int i=0;i<10;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int _nums[max];
    for(int i=0;i<10;i++){
        cout<<_nums[i]<<" ";
    }
    system("pause");
    return 0;
}