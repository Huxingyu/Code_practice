#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

struct bign{
    int big_num[max];
    int len;
    bign(){
        memset(big_num,0,sizeof(big_num));
        len=0;
    }
};

bign big_save(char str[]){
    bign x;
    int size=strlen(str);
    for(int i=0;i<size;i++){
        x.big_num[i]=str[size-1-i]-'0';
        x.len++;
    }
    return x;
}

bign big_short(bign x,bign y){
    bign z;
    for(int i=0;i<x.len || i<y.len;i++){
        if(x.big_num[i]<y.big_num[i]){
            x.big_num[i+1]--;
            x.big_num[i]+=10;
        }
        z.big_num[z.len++]=x.big_num[i]-y.big_num[i];
    }
    return z;
}


int main(){
    char str[2][max];
    for(int i=0;i<2;i++){
        gets(str[i]);
    }
    bign x=big_save(str[0]);
    bign y=big_save(str[1]);
    bign ans=big_short(x,y);
    for(int i=ans.len-1;i>=0;i--){
        printf("%d",ans.big_num[i]);
    }
    system("pause");
    return 0;
}

//写到这里，发现大整数加法应该也写错了
//007、008 rework