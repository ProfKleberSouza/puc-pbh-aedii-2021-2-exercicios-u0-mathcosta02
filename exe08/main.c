#include <stdio.h>

int main() {
  int n=50, i, x;
  int vet[n];

  // DETERMINANDO VALORES AO VETOR
  for(i=0; i<n; i++){
    vet[i] = 1;
  }
  i=0;

  // ALTERAR OS VALORES DO VETOR ATE UM VALOR SER 0
  do{
    scanf("%d", &vet[i]);

    if(vet[i] != 0){
      i++;
    }

  }while(vet[i] != 0);
  i=0;

  // MOSTRANDO NA TELA SE O NUMERO É POSITIVO OU NEGATIVO
  do{
    if(vet[i] > 0){
      printf("POSITIVO\n");
    }
    else{
      printf("NEGATIVO\n");
    }
    i++;
  }while(vet[i] != 0);

  return 0;
}