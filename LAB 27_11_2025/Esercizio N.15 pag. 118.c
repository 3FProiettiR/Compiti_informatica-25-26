#include <stdio.h>
#include <stdlib.h>

void calcolo_biglietto () 
{
    float tariffa_biglietto, peso_bagaglio, prezzo_totale;
    int differenza_peso;
    printf ("inserire il costo del biglietto: ");
    scanf ("%f", &tariffa_biglietto);
    printf ("inserire il peso del bagaglio: ");
    scanf ("%f", &peso_bagaglio);
    if (peso_bagaglio > 20) 
    {   
        printf ("dovra' pagare un supplemento del 2 percento per ogni chilo in più'.\n");
        differenza_peso = peso_bagaglio - 20;
        prezzo_totale = tariffa_biglietto + (((tariffa_biglietto/100) * 2) * differenza_peso);
    }
    else
    {
        printf ("Non dovra' pagare nessun supplemento sul bagaglio.\n");
        prezzo_totale = tariffa_biglietto;
    }
    printf ("Il prezzo totale del biglietto e': %.2f \n", prezzo_totale);
}

int main () 
{
    calcolo_biglietto ();
    system ("pause");
    return 0;
}