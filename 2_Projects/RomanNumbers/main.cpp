#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main()
{
    const string Zeichenvorrat{"IVXLCDM"};
    const vector<int> Grossen{1000, 500, 100, 50, 10, 5, 1};
    bool weiter{true};
    while(weiter){
        unsigned int zahl;
        string rozahl1{};
        string rozahl{};
        cout<<"Bitte geben Sie eine natuerliche Zahl ein (<5000)"<<endl;
        cout<<"Please enter a natural number (<5000): "<<endl;
        cin>>zahl;
        cout<<"Die eingegebene Zahl ist: "<<zahl<<endl;
        cout<<"Die entered number is: "<<zahl<<endl;
        int zahlkopie=zahl;
        for(int k=0;k<=6;k++)
        {   while(zahlkopie/Grossen[k]!=0){
                rozahl1=rozahl1+Zeichenvorrat[6-k];
                zahlkopie=zahlkopie-Grossen[k];
            }
        }
        cout<<"Die vereinfachte romische Schreibweise ist: "<<rozahl1<<endl;
        cout<<"The simplified roman writing is: "<<rozahl1<<endl;

        rozahl=rozahl1;

        for(int n=0;n<=2;n++){
            //cout<<"n: "<<n<<endl;
            int i=rozahl.length()-1;
            bool done=false;
            while((i>=3)&&(!done)){
                //cout<<"i: "<<i<<endl;
                int j=i;
                while((j>=0)&&(rozahl[j]==Zeichenvorrat[2*n])){
                    if((i-j)==3){
                        if((j-1>=0)&&(rozahl[j-1]==Zeichenvorrat[2*n+1])){
                            string temp=rozahl;
                            rozahl="";
                            for(int l=0;l<=j-2;l++){
                                rozahl+=temp[l];
                            }
                            rozahl+=Zeichenvorrat[2*n];
                            rozahl+=Zeichenvorrat[2*n+2];
                            for(unsigned int l=i+1;l<=temp.length()-1;l++){
                                rozahl+=temp[l];
                            }
                            //rozahl+="IX";
                        }
                        else{
                            string temp=rozahl;
                            rozahl="";
                            for(int l=0;l<=j-1;l++){
                                rozahl+=temp[l];
                            }
                            rozahl+=Zeichenvorrat[2*n];
                            rozahl+=Zeichenvorrat[2*n+1];
                            for(unsigned int l=i+1;l<=temp.length()-1;l++){
                                rozahl+=temp[l];
                            }
                            //rozahl+="IV";
                        }
                        done=true;
                        break;
                    }
                    j--;
                }
                i--;
                //cout<<"rozahl: "<<rozahl<<endl;
            }
        }
        cout<<"Die tatsachliche romische Schreibweise ist: "<<rozahl<<endl;
        cout<<"The actual roman writing is: "<<rozahl<<endl;
        cout<<"Wollen Sie eine weitere Zahl eingeben?"<<endl;
        cout<<"Do you want to enter another number?(0/1) "<<endl;
        cin>>weiter;
    }
    return 0;
}
