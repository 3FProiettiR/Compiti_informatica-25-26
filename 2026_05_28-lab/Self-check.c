#include <stdio.h>
#include <string.h>

#define MAX_STUDENTI 10

struct Studente {
    char nome[30];
    char cognome[30];
    float voto;
};

void stampaElenco(struct Studente elenco[], int n);
float calcolaMedia(struct Studente elenco[], int n);
void stampaMigliore(struct Studente elenco[], int n);
int contaSufficienti(struct Studente elenco[], int n);
void cercaStudente(struct Studente elenco[], int n);

int main (){
    struct Studente registro[MAX_STUDENTI];
    int numStudenti;

    do{
        printf("Quanti studenti vuoi inserire (1 a 10)? ");
        scanf("%d", &numStudenti);

        if (numStudenti < 1 || numStudenti > MAX_STUDENTI) {
            printf("Errore! Il numero deve essere compreso tra 1 e 10. \n\n");
        }

    }   while (numStudenti < 1 || numStudenti > MAX_STUDENTI);

    for (int i = 0; i < numStudenti; i++) {
        printf("\n--- Inserimento dati studente %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%29s", registro[i].nome);
        printf("Cognome: ");
        scanf("%29s", registro[i].cognome);
        printf("Voto: ");
        scanf("%f", &registro[i].voto);
    }

    printf("\n ELENCO STUDENTI \n");
    stampaElenco(registro, numStudenti);

    printf("\n STATISTICHE \n");
    float media = calcolaMedia(registro, numStudenti);
    printf("Media dei voti: %.2f\n", media);

    stampaMigliore(registro, numStudenti);

    int sufficienti = contaSufficienti(registro, numStudenti);
    printf("Numero di studenti sufficienti (voto >= 6): %d\n", sufficienti);

    printf("\n RICERCA \n");
    cercaStudente(registro, numStudenti);

    return 0;
}

void stampaElenco(struct Studente elenco[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d) %s %s - Voto: %.2f\n", i + 1, elenco[i].nome, elenco[i].cognome, elenco[i].voto);
    }
}

float calcolaMedia(struct Studente elenco[], int n) {
    float somma = 0;
    for (int i = 0; i < n; i++) {
        somma += elenco[i].voto;
    }
    return somma / n;
}


void stampaMigliore(struct Studente elenco[], int n) {
    int indiceMigliore = 0; 
    
    for (int i = 1; i < n; i++) {
        if (elenco[i].voto > elenco[indiceMigliore].voto) {
            indiceMigliore = i; 
        }
    }
    printf("Studente con il voto piu' alto: %s %s (Voto: %.2f)\n", 
           elenco[indiceMigliore].nome, elenco[indiceMigliore].cognome, elenco[indiceMigliore].voto);
}

int contaSufficienti(struct Studente elenco[], int n) {
    int contatore = 0;
    for (int i = 0; i < n; i++) {
        if (elenco[i].voto >= 6.0) {
            contatore++;
        }
    }
    return contatore;
}

void cercaStudente(struct Studente elenco[], int n) {
    char cognomeCercato[30];
    int trovato = 0;

    printf("Inserisci il cognome dello studente da cercare: ");
    scanf("%29s", cognomeCercato);

    for (int i = 0; i < n; i++) {
        
        if (strcmp(elenco[i].cognome, cognomeCercato) == 0) {
            printf("Studente TROVATO -> Nome: %s, Cognome: %s, Voto: %.2f\n", 
                   elenco[i].nome, elenco[i].cognome, elenco[i].voto);
            trovato = 1; 
        }
    }

    if (!trovato) {
        printf("Nessuno studente trovato con il cognome '%s'.\n", cognomeCercato);
    }
}