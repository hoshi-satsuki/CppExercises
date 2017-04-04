#include <iostream>
#include"MyHeader.h"



int main()
{
    //Testmode
    int a=-10;
    Test_Mode(if(a<0) std::cout<<"works"<<std::endl;)

    //PRINT
    PRINT(a);

    //assert()
    constexpr int BOUNDARY=100;
    int index=25;
    assert(index>=0&&index<BOUNDARY);

    //further macros
    std::cout<<"file"<<":"<<__FILE__<<std::endl;
    std::cout<<"line"<<":"<<__LINE__<<std::endl;
    std::cout<<"date"<<":"<<__DATE__<<std::endl;
    std::cout<<"time"<<":"<<__TIME__<<std::endl;
    std::cout<<"func"<<":"<<__func__<<std::endl;


    return 0;
}
