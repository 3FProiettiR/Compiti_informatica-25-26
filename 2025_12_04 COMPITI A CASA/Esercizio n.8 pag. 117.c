#include <stdio.h>

int main() {
    float a, b, c;

    printf("Inserisci il primo numero: ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%f", &c);

    if ((b - a) == (c - b)) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri non sono in progressione aritmetica.\n");
    }
    return 0;
}
