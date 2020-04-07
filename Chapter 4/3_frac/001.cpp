#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 10

struct fraction{
    int up,down;
};

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

fraction cal(fraction num){
    if(num.down<0){
        num.down=-num.down;
        num.up=-num.up;
    }
    if(num.up==0){
        num.down=1;
    }
    else{
        int d=gcd(abs(num.down),abs(num.up));
        num.down/=d;
        num.up/=d;
    }
    return num;
}

int main(){
    fraction x,ans;
    x.up=7;
    x.down=21;
    ans=cal(x);
    printf("%d %d\n",ans.up,ans.down);
    system("pause");
    return 0;
}

//fraction simpled