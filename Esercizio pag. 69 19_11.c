#include <stdio.h>
#include <stdlib.h>
#define CK 1.20

void importo() 
{
    char nome[15];
    float kmInizio;
    float kmFine;
    float kmPercorsi;
    float importo;

    printf ("inserire il nome ");
    scanf ("%s", nome);
    printf ("Inserire i km iniziali ");
    scanf ("%f", &kmInizio);
    printf ("Inserire i km finali ");
    scanf ("%f", &kmFine);
    kmPercorsi = kmFine - kmInizio;
    importo = kmPercorsi * CK;
    printf ("Gentile Sig. %s deve pagare %3.2f euro\n", nome, importo);
}

int main(int argc, char *argv[]) {
    importo();
    system("PAUSE");
    return 0;
}