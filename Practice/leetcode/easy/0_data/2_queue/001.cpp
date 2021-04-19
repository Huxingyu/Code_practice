#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

class RecentCounter {
    public:
        RecentCounter() {}
        
        queue<int> q;

        int ping(int t) {
            q.push(t);
            while(t-q.front()>3000){
                q.pop();
            }
            return q.size();
        }
};

int main(){

    system("pause");
    return 0;
}