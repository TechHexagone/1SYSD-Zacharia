#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
  int secret, guess, n=0, notfound;
  char name[30];
  int tries[50];
  

  srand(time(NULL));
  secret = rand() % 100 + 1;

  printf("Bonjour comment tu t'appelles ? \n");
  scanf("%s", name);

  printf("J'ai tiré un nombre entre 1 et 100\n");
  notfound = 1;
  while (notfound) {

    printf("Votre idéé : ");
    scanf("%d", &guess);
    tries[n] = guess;
    n++;
    
    if (guess > secret) {
      printf("Grand\n");
    }

    else if (guess > secret) {
      printf("Petit\n");
    }
      else {
	break;
      }

  }
    printf("Bravo %s vous avez trouvé en %d coups.\n", name,  n);
    printf("Vos essais : ");
    
    for (int i = 0; i < n; i++) {
      printf("%d\n", tries[i]);
    }
    
    printf("\n");
    return 0;
  }
