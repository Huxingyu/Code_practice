#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main(){
    string x="pneumonoultramicroscopicsilicovolcanoconiosis";
    vector<string> vt;
    if(x.size()>10){
        x=x[0]+to_string(x.size()-2)+x[x.size()-1];
    }
    cout<<x<<endl;
    system("pause");
    return 0;
}