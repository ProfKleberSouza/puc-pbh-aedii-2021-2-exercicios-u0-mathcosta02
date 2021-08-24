#include <stdio.h>

void preenche_vet(int vet[], int n){
  for(int i=0; i<n; i++){
    scanf("%d", &vet[i]);
  }
}

void menor_maior(int vet[], int n, int *men, int *mai){
  *men = vet[0];
  *mai = vet[0];

  for(int i=1; i<n; i++){
    if(vet[i] < *men){
      *men = vet[i];
    }

    if(vet[i] > *mai){
      *mai = vet[i];
    }
  }
}

int main() {
  int n, menor, maior;

  // TAMANHO DO VETOR
  scanf("%d", &n);

  int vet[n];

  // CHAMA PROCEDIMENTOS
  preenche_vet(vet, n);
  menor_maior(vet, n, &menor, &maior);


  // SAIDAS
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);

  return 0;
}