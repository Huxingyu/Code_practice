#include <cstdio>
#include <cstdlib>

int main(){
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("%d\n",*(*a+1));
    printf("%d\n",*(*(a+1)));
    system("pause");
    return 0;
}