#include <stdio.h>
int main(){
    int a, b;
    //lecteur des deux nombre
    scanf("%d %d", &a, &b);
    //Echanger les valeurs sans variable temporaire
    a = a + b; // a devient la somme de a et b
    b = a - b; // b devient l'ancienne valeur de a
    a = a - b; // a devient l'ancienne valeur de b
    //Affichage des valeurs àprés l'echange
    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}