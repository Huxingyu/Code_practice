//写个冒泡

#include <iostream>
#include <cstdlib>
#define max 10000

using namespace std;

void change(int&,int&);
void seq_maopao(int*,int);

void seq_maopao(int num[],int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i;j++){
            if(num[j]>num[j+1] && j+1<x-i){
                change(num[j],num[j+1]);
            }
        }
        for(int k=0;k<x;k++){
            cout<<num[k]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x,num[max],i=0;
    cout<<"input:"<<endl;
    while(scanf("%d",&x)!=EOF){
        num[i++]=x;
    }

    seq_maopao(num,i);
    for(int j=0;j<i;j++){
        cout<<num[j]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}

void change(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

//冒泡会重复计算n次(假设有n位数需要排列的话)