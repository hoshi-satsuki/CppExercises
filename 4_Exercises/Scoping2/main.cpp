#include <iostream>

using namespace std;

/*Idee: Deklaration in einem inneren Block schr�nkt die Sichtbarkeit der im �u�eren Block
deklarierten Variablen ein.*/

int main()
{
    int a=3;
    {
        float a=3.14;
        cout<<a<<'\n';
    }
    cout<<a;
    return 0;
}
