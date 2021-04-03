#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

template <typename elemtype>
void bucket_sort(elemtype num[],int n){
    int index=0;
    vector<elemtype> temp[n];
    for(int i=0;i<n;i++){
        int x=n*num[i];
        temp[x].push_back(num[i]);
    }
    for(int i=0;i<n;i++){
        sort(temp[i].begin(),temp[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<temp[i].size();j++){
            num[index++]=temp[i][j];
        }
    }
}

int main(){
    float num[]={0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n=sizeof(num)/4;
    bucket_sort(num,n);
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    system("pause");
    return 0;
}