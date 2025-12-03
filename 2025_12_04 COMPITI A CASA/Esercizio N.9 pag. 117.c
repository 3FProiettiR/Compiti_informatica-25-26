#include <stdio.h>
#include <stdlib.h>

int calcolo_accensione () {
    float valore_limite, temp1, temp2, temp3, media;
    printf ("inserisci il valore limite di temperatura per far accendere i riscaldamenti: ");
    scanf ("%f", &valore_limite);
    printf ("inserisci la prima temperatura: ");
    scanf ("%f", &temp1);
    printf ("inserisci la seconda temperatura: ");
    scanf ("%f", &temp2);
    printf ("inserisci la terza temperatura: ");
    scanf ("%f", &temp3);

    media= (temp1 + temp2 + temp3) / 3;
    if (media < valore_limite) {
        printf ("la media delle temperature è: %.1f gradi\n", media);
        printf ("i riscaldamenti verranno accesi\n");
    } else {
        printf ("la media delle temperature è: %.1f gradi\n", media);
        printf ("i riscaldamenti non verranno accesi\n");
    }
    return 0;
}

int main () {
    calcolo_accensione ();
    return 0;
}
