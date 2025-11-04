#include <iostream>
#include <string> 
using namespace std;

 int scelta;
  string figura;
float base, altezza, area, diagmin, diagmag, lato;

void Menu ();
void TRIANGOLO ();
void QUADRATO ();
void RETTANGOLO ();
void ROMBO ();

int Menu (){

    do {

        cout<<"1 TRIANGOLO \n2 QUADRATO \n3 RETTANGOLO \n4 ROMBO \n5 STAMPA \n";
        cin>>scelta;
        
        switch (scelta) {
            case 1: 
                TRIANGOLO ();
                stampa ();
                break;
            case 2:
                QUADRATO ();
                stampa ();
                break;
            case 3:
                RETTANGOLO ();
                stampa ();
                break;
            case 4:
                ROMBO ();
                stampa ();
                break;
        }

    }
    while (scelta=5);
}



int TRIANGOLO (){
    cout<<"inserisci la base";
    cin>>base;

    cout<<"inserisci l'altezza";
    cin>>altezza; 

    figura="TRIANGOLO";

    area=(base*altezza)/2; 


} 

int QUADRATO (){
    cout<<"inserisci il lato";
    cin>>lato;

    figura="QUADRATO";

    area=lato*lato; 
}

int RETTANGOLO (){
    cout<<"inserisci la base";
    cin>>base;

    cout<<"inserisci l'altezza";
    cin>>altezza; 

    figura="RETTANGOLO";

    area=base*altezza; 
}

int ROMBO (){
    cout<<"inserisci la diagonale minore";
    cin>>diagmin;

    cout<<"inserisci la diagonale maggiore";
    cin>>diagmag; 

    figura="ROMBO";

    area=(diagmin*diagmag)/2; 
}

int STAMPA (){
    cout<<"la figura e': "<<figura<<endl;
    cout<<"l'area e': "<<area<<endl;
}