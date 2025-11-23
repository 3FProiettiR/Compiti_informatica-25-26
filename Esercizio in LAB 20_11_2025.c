#include <stdio.h>
#include <stdlib.h>
#define CostoBN 0.10
#define CostoCol 0.80
#define CostoRil 1.30

void calcolo_spesa () {
    int fotoBN, fotoCOL, fotoTOT;
    float costoTOT, costototBN, costototCOL;
    printf("metti il numero di fotocopie in bianco e nero che desidere fare: ");
    scanf("%d", &fotoBN);
    printf("metti il numero di fotocopie a colori che desidere fare: ");
    scanf("%d", &fotoCOL);
    fotoTOT = fotoBN + fotoCOL;
    costototBN = fotoBN * CostoBN;
    costototCOL = fotoCOL * CostoCol;
    costoTOT= costototBN + costototCOL + CostoRil;
    printf("il costo totale delle fotocopie e di: %.2f euro\n", costoTOT);
    printf("il numero totale delle fotocopie e di: %d\n", fotoTOT);
    printf("il costo totale delle fotocopie in bianco e nero e di: %.2f euro\n", costototBN);
    printf("il costo totale delle fotocopie a colori e di: %.2f euro\n", costototCOL);
}

int main() {
    calcolo_spesa();
    system("pause");
    return 0;
}