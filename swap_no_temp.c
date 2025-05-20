#include <stdio.h>

int main() { 
    int a , b;

   scanf("%d %d", &a, &b); // lire entrer de l'utilisateur
// Inversion sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
   printf("Après échange : a = %d, b = %d\n", a, b);
return 0;
}
// c'est un programme qui lit deux entiers et les échange sans utiliser de variable temporaire
