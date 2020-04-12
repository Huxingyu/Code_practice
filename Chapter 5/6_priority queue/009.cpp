#include <iostream>
#include <stdlib.h>
#include <queue>
#include <string>

using namespace std;

struct fruit{
    string name;
    int price;
}f[3];

struct cmp{
    bool operator ()(fruit x,fruit y){
        return x.price<y.price;
    }
};

int main(){
    f[0].name = "apple";
    f[1].name = "bitch";
    f[2].name = "dear";
    f[0].price = 1;
    f[1].price = 2;
    f[2].price = 3;
    priority_queue<fruit,vector<fruit>,cmp> x;
    for(int i=0;i<3;i++){
        x.push(f[i]);
    }
    cout<<x.top().name<<" "<<x.top().price<<endl;
    system("pause");
    return 0;
}