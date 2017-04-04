#include <iostream>
#include "FirstObject.h"



int main()
{
    Person Person1("Annabella Meier",22,Geschlecht::w);
    //Person1.setName("Annabella Meier");
    std::cout<<Person1.getName()<<" "<<"ist"<<" "<<Person1.getAlter()<<" "<<"Jahre alt."<<'\n';
    Person1.setName("Annabella Schulz");
    Person1.setAlter(Person1.getAlter()+1);
    std::cout<<"Sie hatte Geburtstag und hat geheiratet."<<'\n';
    std::cout<<Person1.getName()<<" "<<"ist"<<" "<<Person1.getAlter()<<" "<<"Jahre alt."<<'\n';
    if(Person1.istFrau()==1) std::cout<<"Die Person ist weiblich"<<'\n';
    else std::cout<<"Die Person ist männlich."<<'\n';
    return 0;
}
