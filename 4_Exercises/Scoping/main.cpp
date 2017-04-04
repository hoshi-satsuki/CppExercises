#include <iostream>

using namespace std;

/*Idee: Wenn main eine Funktion aufruft, kann man den Funktionskörper dann als Block
innerhalb von main ansehen, zumindest was Scoping betrifft?*/
//Offenbar NEIN

int b=4;

void f1(){
    cout<<b;
    cout<<a;

}


int main()
{
    int a=3;
    f1();
    return 0;
}
