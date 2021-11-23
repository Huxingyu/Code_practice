#include <cstdio>
#include <cstdlib>

int main(){
    char m[4][3]={"12","34","56","78"},*p[5];
    int k,s=0;
    for(k=0;k<4;k++){
        p[k]=m[k];
    }
    for(k=1;k<4;k+=2){
        s=s*10+p[k][1]-'0';
    }
    printf("%d\n",s);
    system("pause");
    return 0;
}