//basic

#include <iostream>
#include <stdlib.h>
#include <map>

using namespace std;

const int max_num=10;

map<string,int> string_to_int;
map<int,string> int_to_string;
int g[max_num][max_num],weight[max_num];   //邻接矩阵，点权
int n,k,numpreson=0;

int change(string str){
    if(string_to_int.find(str)!=string_to_int.end()){
        return string_to_int[str];
    }else{
        string_to_int[str]=numpreson;
        int_to_string[numpreson]=str;
        return numpreson++;
    }
}

int main(){
    int w;
    string str1,str2;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>str1>>str2>>w;
        int x=change(str1);
        int y=change(str2);
        weight[x]+=w;
        weight[y]+=w;
        g[x][y]+=w;
        g[y][x]+=w;
    }
    system("pause");
    return 0;
}