#include <stdio.h>
#include <stdlib.h>
#define quota_fissa 100
#define una_settimana 600
#define due_settimane 1100
#define supplemento_lenzuola 20
void spesa_soggiorno ()
{
    int nsettimane, risposta;
    printf ("inserire il numero di settimane di soggiorno (1 o 2): ");
    scanf ("%d", &nsettimane);
    switch (nsettimane)
    {
        case 1:
            printf ("Il costo del soggiorno e': %d euro\n", una_settimana + quota_fissa);
            break;
        case 2:
            printf ("Il costo del soggiorno e': %d euro\n", due_settimane + quota_fissa);
            break;
        default:
            printf ("Numero di settimane non valido. Inserire 1 o 2.\n");
    }
    printf ("Vuole il supplemento per le lenzuola? si-1 no-2 : ");
    scanf ("%d", risposta);

    switch (risposta)
    {
        case 1:
            if (nsettimane == 1)
            {
                printf ("Il costo totale del soggiorno con il supplemento e': %d euro\n", una_settimana + quota_fissa + supplemento_lenzuola);
            }
            else{ 
            if (nsettimane == 2)
            {
                printf ("Il costo totale del soggiorno con il supplemento e': %d euro\n", due_settimane + quota_fissa + supplemento_lenzuola);
            }
            }
            break;
        
        case 2:
            printf ("Nessun supplemento per le lenzuola aggiunto.\n");
            break;
        default:
            printf ("Risposta non valida. Inserire 1 per si o 2 per no.\n");
    }
    
}

int main ()
{
    spesa_soggiorno ();
    system ("pause");
    return 0;
}
