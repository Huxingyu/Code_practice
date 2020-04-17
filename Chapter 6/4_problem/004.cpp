#include <stdio.h>
#include <stdlib.h>
#include <stack>
#define max 10

using namespace std;


int main(){
    int n,m,k,arr[max];              //5(不能超过),7,5(个数)
    stack<int> st;
    scanf("%d %d",&n,&m,&k);
    bool temp=true;
    int crruent=1;
    while(k--){
        while(st.empty()!=true){
            st.pop();
        }
        for(int i=1;i<=m;i++){
            scanf("%d",&arr[i]);
        }
        temp=true;
        crruent=1;
        for(int i=1;i<=m;i++){
            st.push(i);
            if(st.size()>n){
                temp=false;
                break;
            }
            while(st.empty()!=true && st.top()==arr[crruent]){
                st.pop();
                crruent++;
            }
        }
        if(st.empty()==true && temp==true){
            printf("ok\n");
        }else{
            printf("no\n");
        }
    }
    system("pause");
    return 0;
}