#include <stdio.h>

int main () {

  int saisie;
  int i = 0;
  int n = 0;
  int tableau[5];
  
  printf("Entrez 5 nombres\n");
  int add = 0;
  while (i < 5) {
    printf("Nombre n° %d : ", i + 1);
    scanf("%d", &saisie);
    tableau[i] = saisie;
    add += saisie; //add = add + saisie;
    printf("%d\n", tableau[i]);
    i++;
  }
  printf("i egal: %d\n", i);
  while (n < (sizeof(tableau) / sizeof(tableau[0]))) {
    printf("%d\n", tableau[n]);
    n++;
  }
  //printf("Résultat : %d\n%d\n", add, tableau[i]);
  

} 
