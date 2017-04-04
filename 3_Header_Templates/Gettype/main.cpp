#include <iostream>
#include "gettype.t"



int main()
{
    int i; std::cout<<gettype(i)<<'\n';
    unsigned int ui; std::cout<<gettype(ui)<<'\n';
    char c;    std::cout<<gettype(c)<<'\n';
    bool b;std::cout<<gettype(b)<<'\n';
    float f; std::cout<<gettype(f)<<'\n';
    return 0;
}
