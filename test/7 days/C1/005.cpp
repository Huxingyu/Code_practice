#include <iostream>
#include <cstdlib>
#include <cstdio>

namespace hu{
    int x=1;
}

namespace fan{
    int x=2;
};

int main(){
    std::cout<<hu::x<<" "<<fan::x<<std::endl;
    system("pause");
    return 0;
}