#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::cout<<"Please enter natural number (<="<<std::numeric_limits<unsigned int>::max()<<"): "<<'\n';
    std::string number;
    getline(std::cin,number);
    //std::cin>>number;
    bool is_natural=true;
    unsigned int z=0;
    for(auto c: number){
        if((c<'0')||(c>'9')){
            is_natural=false;
            break;
        }
        else{
            if((std::numeric_limits<unsigned int>::max()-(static_cast<int>(c)-static_cast<int>('0')))/10<z){
                is_natural=false;
                break;
            }
            else{
                z*=10;
                z+=static_cast<int>(c)-static_cast<int>('0');
            }
        }
    }
    if(is_natural)  std::cout<<z<<'\n';
    else std::cout<<"Input is not a natural number or number is too large."<<'\n';

    return 0;
}
