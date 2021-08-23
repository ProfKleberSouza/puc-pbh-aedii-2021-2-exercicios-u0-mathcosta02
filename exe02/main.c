#include <stdio.h>

int main() {
  int T, V, R, D, L;

  // ENTRADA DE DADOS
  scanf("%d %d %d", &T, &V, &R);

  // CALCULOS
  D = T*V;
  L = D/R;


  // SAIDA DE DADOS
  printf("R = %d\n", R);
  printf("V = %d\n", V);
  printf("T = %d\n", T);
  printf("D = %d\n", D);
  printf("L = %d\n", L);

  return 0;
}