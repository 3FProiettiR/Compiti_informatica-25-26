#include <stdio.h>
#include <stdlib.h>

int main () {
    float num;
    printf ("inserisci un numero: ");
    scanf ("%f", &num);
    if (-5<= num && num<=10) {
        printf ("OK\n");
    } else {
        printf ("il dato è fuori dall'intervallo. \n");
    }
}
