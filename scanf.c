#include<stdio.h> 

int main () {
  int n;
  printf("Entrez un nombre\n");
  scanf("%d", &n);
  printf("Nombre que vous avez choisi %d", n + 30);

  if (n < 9) {
    printf("Plus petit que toi\n");
  }
  else {
    printf("égale ou plus grand que 9\n");
  }
}
