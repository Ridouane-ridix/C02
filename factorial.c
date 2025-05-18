#include <stdio.h>
int main() {
    int Nb;
    scanf("%d", &Nb);

    if (Nb < 0)
    {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1;
    }

    long factoriel = 1;
    for (int i = 1; i <= Nb; i++) {
        factoriel *= i;
    }

    printf("Le factoriel de %d est : %ld\n", Nb, factoriel);
    return 0; 
}