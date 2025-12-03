#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void risolvi_equazione_secondo_grado () {
    float a,b,c;
    printf ("inserisci il valore di a: ");
    scanf ("%f", &a);
    printf ("inserisci il valore di b: ");
    scanf ("%f", &b);
    printf ("inserisci il valore di c: ");
    scanf ("%f", &c);
    
    if (a =! 0) {
        float delta = b*b - 4*a*c;
        if (delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf ("le soluzioni sono: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            float x = -b / (2*a);
            printf ("le soluzioni sono: x = %.2f\n", x);
        } else {
            printf ("l'equazione non ha radici reali.\n");
        }
    }
    else {
        printf ("l'equazione non è di secondo grado.\n");
    }
}

int main() {
    risolvi_equazione_secondo_grado();
    return 0;
}