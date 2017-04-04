#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*Einlesen der Daten des Kredits*/
    struct Kredit{
        float Umfang;
        float Zinssatz; //in % nominal pro Jahr
        int Anfangsmonat;
        int Anfangsjahr;
        float Monatsrate;
        int Laufzeit; //in Jahren
    }k;
    cout<<"Geben Sie die Daten fuer Ihren Kredit ein."<<endl;
    cout<<"Umfang: "<<endl;
    cin>>k.Umfang;
    cout<<"Zinssatz (in % nominal pro Jahr): "<<endl;
    cin>>k.Zinssatz;
    cout<<"Anfangsmonat: "<<endl;
    cin>>k.Anfangsmonat;
    cout<<"Anfangsjahr: "<<endl;
    cin>>k.Anfangsjahr;
    cout<<"Monatsrate: "<<endl;
    cin>>k.Monatsrate;
    cout<<"Laufzeit (in Jahren): "<<endl;
    cin>>k.Laufzeit;

//Öffnen der Datei in die geschrieben werden soll
    string dateiname="tilgungsplan.txt";
    ofstream ziel(dateiname);
    if(!ziel) cerr<<dateiname<<" kann nicht zum schreiben geoffnet werden"<<endl;
    else{
//Schreibe erste Zeile in Datei
            ziel.setf(ios::showpoint|ios::fixed,ios::floatfield);
            ziel.precision(2);
            ziel<<"Anfangschulden: "<<k.Umfang<<"  Zinssatz nominal: "<<k.Zinssatz<<'\n';
            ziel<<'\n';
            ziel.width(9);
            ziel<<"Zahlmonat";
            ziel.width(8);
            ziel<<"Rate";
            ziel.width(8);
            ziel<<"Zinsen";
            ziel.width(8);
            ziel<<"Tilgung";
            ziel.width(11);
            ziel<<"Rest";
            ziel<<'\n';

//Initialisiere Variablen
            float Rest=k.Umfang;
            float Zinsen,Tilgung;
            float Rate=k.Monatsrate;
            int Monat=k.Anfangsmonat;
            int Jahr=k.Anfangsjahr;
            int Index=0;
            bool weiter=true;
//Schleife durch die Tabelle
            while(weiter){
                Index++;

                Zinsen=Rest*k.Zinssatz/1200.;
                //wir runden kaufmännisch:
                Zinsen = 100.0*Zinsen+.5;
                long temp = static_cast<long>(Zinsen); //Nachkommastellen streichen
                Zinsen = static_cast<float>(temp)/100.;
                Tilgung=Rate-Zinsen;

                if(Rest-Tilgung<0){
                    Rate=Zinsen+Rest;
                    Tilgung=Rate-Zinsen;
                    Rest=0;
                    weiter=0;
                }
                else Rest-=Tilgung;

                ziel.width(3);
                ziel<<Monat;
                ziel<<'.';
                ziel<<Jahr;
                ziel<<' ';
                ziel.width(8);
                ziel<<Rate;
                ziel.width(8);
                ziel<<Zinsen;
                ziel.width(8);
                ziel<<Tilgung;
                ziel.width(11);
                ziel<<Rest;
                ziel<<'\n';

                if(Index==k.Laufzeit*12) weiter=0;
                if(Monat<12) Monat++;
                else{
                    Jahr++;
                    Monat=1;
                }
            }
    }



    return 0;
}

