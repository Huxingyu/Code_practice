#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

struct bign{
    int num[max];
    int len;
    bign(){
        memset(num,0,sizeof(num));
        len=0;
    }
};

bign big_save(char str[]){
    bign x;
    int size=strlen(str);
    for(int i=0;i<size;i++){
        x.num[i]=str[size-1-i]-'0';
        x.len++;
    }
    return x;
}

bign big_add(bign x,bign y){
    bign c;
    int carry=0;
    for(int i=0;i<x.len || i<y.len;i++){
        int temp=x.num[i]+y.num[i]+carry;
        c.num[c.len++]=temp%10;
        carry=temp/10;
    }
    if(carry!=0){
        c.num[c.len]=carry;
    }
    return c;
}

int main(){
    char str[2][max];
    for(int i=0;i<2;i++){
        gets(str[i]);
    }
    bign x=big_save(str[0]);
    bign y=big_save(str[1]);
    bign ans=big_add(x,y);
    for(int i=ans.len-1;i>=0;i--){
        printf("%d",ans.num[i]);
    }
    system("pause");
    return 0;
}