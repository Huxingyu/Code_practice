#include <iostream>
#include <cstdlib>
#define max 10

using namespace std;

int n,p[max];
bool hashTable[max]={false};

void generate(int index){
    if(index==n+1){
        for(int i=1;i<=n;i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(hashTable[i]==false){
            p[index]=i;
            hashTable[i]=true;
            generate(index+1);
            hashTable[i]=false;
        }
    }
}

int main(){
    n=3;
    generate(1);
    system("pause");
    return 0;
}