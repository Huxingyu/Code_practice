#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string x;
    vector<string> vt;
    for(int i=0;i<n;i++){
        cin>>x;
        int _n=x.size();
        if(_n>10){
            x=x[0]+to_string(_n-2)+x[_n-1];
            vt.push_back(x);
        }else{
            vt.push_back(x);
        }
    }
    for(auto it=vt.begin();it!=vt.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}