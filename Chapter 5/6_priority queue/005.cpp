#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

struct fruit{
    string name;
    int price;
    friend bool operator < (fruit x,fruit y){
        return x.price>y.price;
    }
}f1,f2,f3;

int main(){
    priority_queue<fruit> q;
    f1.name ="a";
    f2.name ="b";
    f3.name ="c";
    f1.price =1;
    f2.price =2;
    f3.price =3;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout<<q.top().name<<" "<<q.top().price<<endl;
    system("pause");
    return 0;
}

