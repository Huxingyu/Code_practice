#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

const int n=10;

struct node{
    int v,w;
    node(int _v,int _w){
        v=_v;
        w=_w;
    }
};

vector<node> Node[n];

int main(){
    Node[1].push_back(node(3,4));
}

