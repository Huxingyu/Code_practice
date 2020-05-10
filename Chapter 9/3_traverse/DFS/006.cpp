//just do it

#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>

using namespace std;

const int max_num=10;

int n,k,num_person=0;
bool vis[max_num]={false};
int weight[max_num]={0},g[max_num][max_num]={0};
map<string,int> string_to_int;
map<int,string> int_to_string;
map<string,int> gang;

int change(string str){
    if(string_to_int.find(str)!=string_to_int.end()){
        return string_to_int[str];
    }else{
        string_to_int[str]=num_person;
        int_to_string[num_person]=str;
        return num_person++;
    }
}

void DFS(int now_visit,int &head,int &num_member,int &total_value){
    vis[now_visit]=true;
    num_member++;
    total_value+=weight[now_visit];
    if(weight[head]<weight[now_visit]){
        head=now_visit;
    }
    for(int i=0;i<num_person;i++){
        if(g[now_visit][i]>0){
            total_value+=weight[i];
            g[now_visit][i]=g[i][now_visit]=0;
            if(vis[i]==false){
                DFS(i,head,num_member,total_value);
            }
        }
    }
}

void DFS_trave(){
    for(int i=0;i<num_person;i++){
        int head=i,num_member=0,total_value=0;
        DFS(i,head,num_member,total_value);
        if(num_member>2 && total_value>k){
            gang[int_to_string[head]]=num_member;
        }
    }
}

int main(){
    int w;
    cin>>n>>k;
    string str1,str2;
    for(int i=0;i<n;i++){
        cin>>str1>>str2>>w;
        int x=change(str1);
        int y=change(str2);
        weight[x]+=w;
        weight[y]+=w;
        g[x][y]+=w;
        g[y][x]+=w;
    }
    DFS_trave();
    cout<<gang.size()<<endl;
    map<string,int>::iterator it;
    for(it=gang.begin();it!=gang.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    system("pause");
    return 0;
}
