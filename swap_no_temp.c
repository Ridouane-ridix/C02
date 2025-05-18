#include <stdio.h>

int main() {
 int a, b;

    // Lire les deux nombres
    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    // Afficher avant l'échange
    printf("Avant échange : a = %d, b = %d\n", a, b);

    // Échanger les nombres sans variable temporaire (méthode arithmétique)
    a = a + b;
    b = a - b;
    a = a - b;

    // Afficher après l'échange
    printf("Après échange : a = %d, b = %d\n", a, b);
    return 0;
}
