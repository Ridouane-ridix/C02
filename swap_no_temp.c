#include <stdio.h>
int main() {

    int a, b; //declaration de deux variables entiers
    
    scanf("%d %d", &a, &b);  //lecteur des deux nombres

    
    a = a + b;    // a devient la somme de a et b
    b = a - b;   // b devient l'ancienne valeur de a
    a = a - b;  // a devient l'ancienne valeur de b
     
    printf("Après échange: a = %d, b = %d\n", a, b); //Affichage des valeurs àprés l'echange

    return 0; //fin du programme
}
