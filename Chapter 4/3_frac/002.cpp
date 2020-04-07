#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

fraction mul(fraction x,fraction y){
    fraction ans;
    ans.down=x.down*y.down;
    ans.up=(x.up*y.down+y.up*x.down);
    return ans;
}

fraction simple(fraction x){
    if(x.down<0){
        x.down=-x.down;
        x.up=-x.up;
    }
    if(x.up==0){
        x.down=1;
    }
    else{
        int temp=gcd(abs(x.down),abs(x.up));
        x.up/=temp;
        x.down/=temp;
    }
    return x;
}

int main(){
    fraction x,y,p,ans;
    x.down=3,x.up=1;
    y.down=12,y.up=4;
    p=mul(x,y);
    ans=simple(p);
    printf("%d %d\n",ans.up,ans.down);
    system("pause");
    return 0;
}


//分数的加减乘除一个样子，其他的不必再写