//vector-distance

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vt={1,2,3,4,5};
    int target=3;
    vector<int>::iterator it=find(vt.begin(),vt.end(),target);
    cout<<distance(vt.begin(),it)<<endl;
    cout<<vt.size();
    system("pause");
    return 0;
}