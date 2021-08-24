#include <stdio.h>
#include <string.h>

struct Aluno{
  char nome[15];
  char nome3[15];
  float nota;
};

void cadastra_Alunos(struct Aluno vet[], int n){
  for(int i=0; i<n; i++){
    scanf("%s %f", vet[i].nome, &vet[i].nota);
  }
}

float nota_Media(struct Aluno vet[], int n){
  float media=0, soma=0;
  
  for(int i=0; i<n; i++){
    soma = soma + vet[i].nota;
  }

  media = soma/n;
  return media;
}

void maiores3_Notas(struct Aluno vet[], int n, float *nota1, float *nota2, float *nota3){
  *nota1=vet[0].nota;
  *nota2=vet[0].nota;
  *nota3=vet[0].nota;

  for(int i=0; i<n; i++){
    if(vet[i].nota > *nota1){
      *nota1 = vet[i].nota;
    }
  }

  for(int i=0; i<n; i++){
    if(vet[i].nota != *nota1 &&  vet[i].nota > *nota2){
      *nota2 = vet[i].nota;
    }
  }

  for(int i=0; i<n; i++){
    if(vet[i].nota != *nota1 && vet[i].nota != *nota2 &&  vet[i].nota > *nota3){
      *nota3 = vet[i].nota;
    }
  }
}

void ordem_Alfa(struct Aluno vet[], int n, float n1, float n2, float n3){
}

int main() {
  int n;
  float media, n1, n2, n3;

  // QUANTIDADE DE ALUNOS
  scanf("%d", &n);

  struct Aluno vet[n];

  // CHAMANDO FUNCOES E PROCEDIMENTOS
  cadastra_Alunos(vet, n);
  media = nota_Media(vet, n);
  maiores3_Notas(vet, n, &n1, &n2, &n3);
  ordem_Alfa(vet, n, n1, n2, n3);

  // SAIDA
  printf("\nNOTA MEDIA = %0.1f\n", media);
  printf("NOTA 1 = %0.1f\n", n1);
  printf("NOTA 2 = %0.1f\n", n2);
  printf("NOTA 3 = %0.1f\n", n3);

  return 0;
}