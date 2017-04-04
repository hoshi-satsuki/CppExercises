#include <iostream>
#include "SetofInt.h"



int main()
{
    SetofInt I {3,2,4};
    bool GoOn=true;
    bool dM=true;
    while(GoOn){
        int a;
        if(dM){
            dM=false;
            std::cout<<"0: exit"<<'\n';
            std::cout<<"1: menu"<<'\n';
            std::cout<<"2: display set"<<'\n';
            std::cout<<"3: add member"<<'\n';
            std::cout<<"4: remove member"<<'\n';
            std::cout<<"5: remove all members"<<'\n';
            std::cout<<"6: test whether a number is a member"<<'\n';
            std::cout<<"7: find size"<<'\n';
            std::cout<<"8: find max"<<'\n';
            std::cout<<"9: find min"<<'\n';
        }
        std::cout<<"What do you want to do? ";
        char ans;
        std::cin>>ans;
        switch(ans){
            case '0': GoOn=false; break;
            case '1': dM=true;break;
            case '2': I.display(); break;
            case '3': std::cout<<"Enter integer number: ";
                      std::cin>>a;
                      I.addelt(a);
                      I.display();
                      break;
            case '4': std::cout<<"Enter integer number: ";
                      std::cin>>a;
                      I.rmelt(a);
                      I.display();
                      break;
            case '5': I.del();
                      I.display();
                      break;
            case '6': std::cout<<"Enter integer number: ";
                      std::cin>>a;
                      std::cout<<I.isMember(a)<<'\n';
                      break;
            case '7': std::cout<<I.numMem()<<'\n';break;
            case '8': std::cout<<I.getMax()<<'\n';break;
            case '9': std::cout<<I.getMin()<<'\n';break;
            default: std::cout<<"This was not a valid answer."<<'\n';
        }
    }
    return 0;
}
