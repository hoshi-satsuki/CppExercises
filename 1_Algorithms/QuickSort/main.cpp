#include <iostream>
#include <vector>
#include <cstdlib>



template<typename T>
void exchange (T& a, T& b){
    const T temp =a;
    a=b;
    b=temp;
}

template<typename T>
bool is_less(const T& a, const T& b){
    return a<b;
}
//spezialisiertes template für den Typ int
template<>
bool is_less<int>(const int& a, const int& b){
    return abs(a)<abs(b);
}



template<typename T>
void print(const std::vector<T>& V){
    for(const T& wert : V){
        std::cout<<wert<<" ";
    }
    std::cout<<'\n';
}

template<typename T>
void quicksort(std::vector<T>& a, const int links, const int rechts){
    int li=links;
    int re=rechts;
    T el=a[(links+rechts)/2];
    do{
        while(is_less(a[li],el)) ++li;
        while(is_less(el,a[re])) --re;
        if(li<re) exchange(a[li],a[re]);
        if(li<=re){
            ++li;
            --re;
        }
    }while(li<=re);
    if(links<re) quicksort(a,links,re);
    if(li<rechts) quicksort(a,li,rechts);
}

int main(){
    std::cout<<"Quicksort a vector."<<'\n';
    std::vector<double> dV {1.09,2.2,79.6,-3.9,2.7,100.9,18.8,99.9};
    print(dV);
    quicksort(dV,0,dV.size()-1);
    print(dV);
    std::cout<<'\n';
    std::cout<<"Using a specialized template sort an integer vector by absolute value:"<<'\n';
    std::vector<int> iV {100,22,-3,44,6,-9,-2,1,8,9};
    print(iV);
    quicksort(iV,0,iV.size()-1);
    print(iV);


}


