#include <iostream>
#include <limits>

using namespace std;

int main()
{
    unsigned int number_in;
    unsigned long long number;
    unsigned long long max_number;
    int iterats=0;
    cout<<"Please enter a natural number (>0):"<<"\n";
    cin>>number_in;
    number=number_in;
    max_number=number;
    cout<<iterats<<" : "<<number<<" - maximum: "<<max_number<<"\n";
    while(number>1){
        iterats++;
        if(number%2==0) number/=2;
        else{
            if((numeric_limits<unsigned long long>::max()-1)/3<number){
                cout<<"Number has gotten too large."<<'\n';
                break;
            }
            else   number=number*3+1;
        }
        if(number>max_number){
            max_number=number;
            cout<<"new maximum: "<<max_number<<" Continue with enter."<<endl;
            string dummy;
            getline(cin, dummy); // weiter mit Tastendruck
        }
        cout<<iterats<<" : "<<number<<" - maximum: "<<max_number<<"\n";
    }

    return 0;
}
