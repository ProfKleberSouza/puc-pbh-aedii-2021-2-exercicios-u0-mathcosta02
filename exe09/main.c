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

void nota_Media(struct Aluno vet[], int n){
  float media=0, soma=0;
  
  for(int i=0; i<n; i++){
    soma = soma + vet[i].nota;
  }

  media = soma/n;
  printf("\nNOTA MEDIA = %0.1f\n", media);
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
  int x=0;
  float aux;
  char aux2[15];

  for(int i=0; i<n; i++){
    if(vet[i].nota == n1 || vet[i].nota == n2 || vet[i].nota == n3){
      // TROCAR POSICAO DAS MAIORES NOTAS
      aux = vet[i].nota;
      vet[i].nota = vet[x].nota;
      vet[x].nota = aux;
      // COPIAR OS NOMES DAS MAIORES NOTAS PARA O VET NOME3
      strcpy(vet[x].nome3, vet[i].nome);
      x++;
    }
  }
  aux=0;

  // ORDEM ALFABETICA DAS 3 MAIORES NOTAS
  for(int x=0; x<3; x++){
    for(int y=x+1; y<3; y++){
      if(strcmp(vet[x].nome3, vet[y].nome3) > 0){
        strcpy(aux2, vet[x].nome3);
        strcpy(vet[x].nome3, vet[y].nome3);
        strcpy(vet[y].nome3, aux2);

        aux = vet[x].nota;
        vet[x].nota = vet[y].nota;
        vet[y].nota = aux;
      }
    }
  }

  for(int x=0; x<3; x++){
    printf("%s %0.1f\n", vet[x].nome3, vet[x].nota);
  }
}

int main() {
  int n;
  float n1, n2, n3;

  // QUANTIDADE DE ALUNOS
  scanf("%d", &n);

  struct Aluno vet[n];

  // CHAMANDO PROCEDIMENTOS
  cadastra_Alunos(vet, n);
  nota_Media(vet, n);
  maiores3_Notas(vet, n, &n1, &n2, &n3);
  ordem_Alfa(vet, n, n1, n2, n3);

  return 0;
}