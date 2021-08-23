#include <stdio.h>

int main() {
  float n1, n2, n3, n4, media;

  // ENTRADA DE DADOS
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  // CALCULA A MEDIA
  media = (n1+n2+n3+n4)/4;

  // SAIDA
  if(media >= 6){
    printf("NOTA = %0.1f (APROVADO)\n", media);
  }
  else{
    printf("NOTA = %0.1f (REPROVADO)\n", media);
  }

  return 0;
}