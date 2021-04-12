#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int donnee[100];
  int nombreEntree;
  int n = 0;
  srand(time(NULL));
  int nombreDeviner = 50;
  //int nombreDeviner = rand() % 100 + 1;
  int cpt = 0;
  printf("Devine le nombre : ");
  scanf("%d", &nombreEntree);

  while (nombreEntree != nombreDeviner) {
    
    if (nombreEntree < nombreDeviner) {
      printf("C'est plus grand ! ");
      donnee[cpt] = nombreEntree;
      scanf("%d", &nombreEntree);
      cpt++;
    }

    else if (nombreEntree > nombreDeviner) {
      printf("C'est plus petit ! ");
      donnee[cpt] = nombreEntree;
      scanf("%d", &nombreEntree);
      cpt++;
    }

  }

  while (n < cpt) {
    printf("Vous avez essayé %d \n", donnee[n]);
    n++;    
  }
  
  
  printf("\nVous avez gagné !\nLe chiffre/nombre mystère était %d\n", nombreDeviner);
  
  if (cpt <= 3) {
    printf("Félicitation ! Vous avez trouvé le chiffre/nombre mystère en seulement %d coup(s) !\n", cpt+1);
  }
  
  else {
    printf("Vous avez trouvé le Chiffre/Nombre mystère en %d coups !\n", cpt+1);
  }

  return 0;
}
