#include <iostream>
#include <string> 
using namespace std;

int scelta;
string figura;
float base, altezza, area, diagmin, diagmag, lato;


void TRIANGOLO ();
void QUADRATO ();
void RETTANGOLO ();
void ROMBO ();
void STAMPA ();

int main (){

    do {

        cout<<"1 TRIANGOLO \n2 QUADRATO \n3 RETTANGOLO \n4 ROMBO \n5 STAMPA \n";
        cin>>scelta;
        
        switch (scelta) {
            case 1: 
                TRIANGOLO ();
                STAMPA ();
                break;
            case 2:
                QUADRATO ();
                STAMPA ();
                break;
            case 3:
                RETTANGOLO ();
                STAMPA ();
                break;
            case 4:
                ROMBO ();
                STAMPA ();
                break;
        }

    }
    while (scelta==5);
}



void TRIANGOLO (){
    cout<< "inserisci la base";
    cin>>base;

    cout<< "inserisci l'altezza";
    cin>>altezza; 

    figura="TRIANGOLO";

    area=(base*altezza)/2; 


} 

void QUADRATO (){
    cout<< "inserisci il lato";
    cin>>lato;

    figura="QUADRATO";

    area=lato*lato; 
}

void RETTANGOLO (){
    cout<< "inserisci la base";
    cin>>base;

    cout<< "inserisci l'altezza";
    cin>>altezza; 

    figura="RETTANGOLO";

    area=base*altezza; 
}

void ROMBO (){
    cout<< "inserisci la diagonale minore";
    cin>>diagmin;

    cout<< "inserisci la diagonale maggiore";
    cin>>diagmag; 

    figura="ROMBO";

    area=(diagmin*diagmag)/2; 
}

void STAMPA (){
    cout<<"la figura e': "<<figura<<endl;
    cout<<"l'area e': "<<area<<endl;
}