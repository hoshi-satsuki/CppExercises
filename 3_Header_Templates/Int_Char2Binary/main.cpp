#include <iostream>
#include "Int_Char2binary.h"






int main()
{


    char number_in;
    //std::cout<<"Please enter an integer number: "<<'\n';
    std::cout<<"Please enter a character: "<<'\n';
    std::cin>>number_in;
    Integer2Bitrepresentation(number_in);

    return 0;
}


