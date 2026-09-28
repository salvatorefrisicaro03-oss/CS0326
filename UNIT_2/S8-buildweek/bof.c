/* Author: lorenzo-bfn */
#include <stdio.h>

int main() {
    int vector[10], i = 0, j, k;
    int swap_var;
    int valore;

    printf("Versione BOF - Inserisci valori (CTRL+C per uscire, oppure aspetta il crash):\n");
    printf("Array dichiarato: vector[10] sullo stack.\n");
    printf("Il ciclo NON ha limiti: scrivera' oltre la memoria allocata fino al crash.\n\n");

    /* CICLO INFINITO — nessun controllo sulla capienza dell'array! */
    while (1) {
        printf("[%d]: ", i + 1);
        scanf("%d", &valore);
        vector[i] = valore;   // <-- buffer overflow qui!

        /* Stampa indirizzi di memoria per vedere il danno */
        printf("  >> Scritto %d in vector[%d] all'indirizzo %p\n",
               valore, i, (void*)&vector[i]);
        i++;
    }

    /* Il programma non arrivera' mai qui, ma lasciamo l'ordinamento */
    for (j = 0; j < 10 - 1; j++) {
        for (k = 0; k < 10 - j - 1; k++) {
            if (vector[k] > vector[k + 1]) {
                swap_var = vector[k];
                vector[k] = vector[k + 1];
                vector[k + 1] = swap_var;
            }
        }
    }

    printf("Vettore ordinato:\n");
    for (j = 0; j < 10; j++)
        printf("[%d]: %d\n", j + 1, vector[j]);

    return 0;
}