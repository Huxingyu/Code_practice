#include <iostream>
#include <queue>
#include <stdlib.h>
#define max 3

using namespace std;

struct fruit{
    string name;
    int price;
    friend bool operator <(fruit x,fruit y){
        return x.price<y.price;
    }
}f[max];

int main(){
    priority_queue<fruit> x;
    f[0].name = "a";
    f[1].name = "b";
    f[2].name = "c";
    f[0].price = 1;
    f[1].price = 2;
    f[2].price = 3;
    for(int i=0;i<max;i++){
        x.push(f[i]);
    }
    cout<<x.top().name<<" "<<x.top().price<<endl;
    system("pause");
    return 0;
}