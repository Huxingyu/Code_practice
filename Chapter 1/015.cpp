#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    char name[20];
    scanf("%[^\n]s",name);      //this great
    printf("%s\n", name);
    system("pause");
    return 0;
}

// int main(){
//     int a,b,c;
//     scanf("%d:%d:%d",&a,&b,&c);
//     printf("%d:%d:%d",a,b,c);
//     system("pause");
//     return 0;
// }