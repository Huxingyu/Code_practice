#include <stdio.h>
#include <stdlib.h>
#include <stack>
#define max 10

using namespace std;

int main(){
    int n,m,k,arr[max];
    stack<int> st;
    scanf("%d %d",&m,&n);
    //--------------------------
    bool temp=true;
    int crruent=1;
    for(int i=1;i<=m;i++){
        scanf("%d",&arr[i]);
    }
    while(!st.empty()){
        st.pop();
    }
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
        printf("ok");
    }else{
        printf("no");
    }
    system("pause");
    return 0;
}