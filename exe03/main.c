#include <stdio.h>

int main() {
  int n;

  // ENTRADA DE DADOS
  scanf("%d", &n);

  printf("NUMERO ");

  // SE O NUMERO FOR 0
  if(n == 0){
    printf("NEUTRO");
  }
  
  // SE O NUMERO NAO FOR 0
  else{
    // PAR OU IMPAR
    if(n % 2 == 0){
      printf("PAR ");
    }
    else{
      printf("IMPAR ");
    }

    // NEGATIVO OU POSITIVO
    if(n < 0){
      printf("NEGATIVO");
    }
    else{
      printf("POSITIVO");
    }
  }
   
  return 0;
}