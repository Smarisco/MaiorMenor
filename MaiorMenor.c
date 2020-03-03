#include <stdio.h>

int main(void) {
  int a, b,c,maior,menor;
    scanf ("%d",&a);
    scanf ("%d", &b);
    scanf ("%d", &c);
      maior=a;
      menor=a;

  if (b<menor)
    menor = b;
  if (b>maior)
    maior = b;
  if (c<menor)
    menor = c;
  if (c>maior)
    maior = c;
      printf ("\n %d", menor);
        printf ("\n %d", maior);

  return 0;
}
