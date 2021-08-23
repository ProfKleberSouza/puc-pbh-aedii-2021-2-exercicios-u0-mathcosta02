#include <stdio.h>

void menor_maior(int a, int b, int c, int *men, int *mai){
  *men = a;
  *mai = b;

  // VERIFICA O MENOR NUMERO
  if(b < *men){
    *men = b;
  }
  if(c < *men){
    *men = c;
  }

  // VERIFICA O MAIOR NUMERO
  if(a > *mai){
    *mai = a;
  }
  if(c > *mai){
    *mai = c;
  }
}

int main() {
  int n1, n2, n3, menor, maior;

  // ENTRADA DE DADOS
  scanf("%d %d %d", &n1, &n2, &n3);

  // CHAMA PROCEDIMENTO
  menor_maior(n1, n2, n3, &menor, &maior);

  // SAIDA
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);
  return 0;
}