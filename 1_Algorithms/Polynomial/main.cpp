#include <iostream>
#include <vector>

float poly(const std::vector<int>& V, const float x){
    static int j=0;
    j++;
    if(j==V.size()) return V[j-1];
    else return V[j-1]+x*poly(V,x);
}



int main()
{
    //f(x)=k_0+k_1x+k_2x^2+...+k_nx^n
    //iV=(k_0,...,k_n)
    std::vector<int> iV={9, 3, 5, 2};
    float x=3;
    std::cout<<poly(iV,x);

    return 0;
}
