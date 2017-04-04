#include "Rational.h"
#include <iostream>

using namespace std;

int main()
{
    Rational my(3,-7);
    my.outputR();
    Rational you(-5,2);
    my.reciprocal();
    my.add(3);
    my.outputR();
    Rational he=div(my,you);
    he.outputR();
    Rational she;
    she.inputR();
    she.outputR();
    return 0;
}
