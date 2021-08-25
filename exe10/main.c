#include <stdio.h>
#include <stdlib.h>

void preenche_vet(int vet[]){
  for(int i=0; i<10; i++){
    scanf("%d", &vet[i]);
  }
}

void inverte_vetor(int vet[]){
  int aux, i=0, n=9;

  while(i<n){
    aux = vet[i];
    vet[i] = vet[n];
    vet[n] = aux;

    i++;
    n--;
  }
}

void mostra_vet(int vet[]){
  for(int i=0; i<10; i++){
    printf("%d\n", vet[i]);
  }
}

int main() {
  int *vet = (int*)malloc(10*sizeof(int));

  // CHAMA PROCEDIMENTOS
  preenche_vet(vet);
  inverte_vetor(vet);
  mostra_vet(vet);

  return 0;
}