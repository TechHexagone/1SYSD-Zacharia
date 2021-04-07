#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int nombreEntree;
  int nombreDeviner = rand () % 10 + 1;
  printf("Devine le nombre :");
  scanf("%d", &nombreEntree);
  

  while (nombreEntree != nombreDeviner) {
    
    if (nombreEntree < nombreDeviner) {
      printf("C'est plus ! ");
      scanf("%d", &nombreEntree);
    }

    else if (nombreEntree > nombreDeviner) {
      printf("C'est moins ! ");
      scanf("%d", &nombreEntree);
    }

  }
  
  printf("Vous avez gagné !\n");
  
}
