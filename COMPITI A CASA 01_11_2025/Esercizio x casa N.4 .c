#include <stdio.h>
#include <stdlib.h>

void trasforma_ore ()
{
    int secondi, minuti, ore;
    printf ("inserisci il numero di ore da trasformare: ");
    scanf ("%d", &ore);
    printf ("inserisci se vuoi trasformare in minuti (1) o secondi (2): ");
    int scelta;
    scanf ("%d", &scelta);
    if (scelta == 1) {
        minuti = ore * 60;
        printf ("%d ore sono %d minuti.\n", ore, minuti);
    } else if (scelta == 2) {
        secondi = ore * 3600;
        printf ("%d ore sono %d secondi.\n", ore, secondi);
    } else {
        printf ("Scelta non valida.\n");
    }
}

int main ()
{
    trasforma_ore ();
    return 0;
}