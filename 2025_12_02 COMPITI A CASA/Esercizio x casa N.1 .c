#include <stdio.h>
#include <stdlib.h>

int main () {
    float num;
    printf("Inserisci un numero : ");
    scanf("%f", &num);
    if (num > 0) {
        printf("Il numero %.2f e' positivo.\n", num);
    } else if (num < 0) {
        printf("Il numero %.2f e' negativo.\n", num);
    } else {
        printf("Il numero e' zero, quindi positivo.\n");
    }
    return 0;
}
