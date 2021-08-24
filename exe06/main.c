#include <stdio.h>

void triangulo(int n1, int n2, int n3){
  // SE OS LADOS NAO FORMAREM UM TRIANGULO
  if((n1 > n2+n3) || (n2 > n1+n3) || (n3 > n1+n2)){
    printf("OS LADOS NAO FORMAM UM TRIANGULO");
  }

  // SE OS LADOS FORMAREM UM TRIANGULO
  else{
    printf("TRIANGULO ");

    // SE OS 3 LADOS FOREM IGUAIS
    if(n1 == n2 && n1 == n3){
      printf("EQUILATERO");
    }
    // SE 2 LADOS FOREM IGUAIS
    if((n1 == n2 && n1 != n3) || (n1 == n3 && n1 != n2) || (n2 == n3 && n2 != n1)){
      printf("ISOSCELES");
    }
    // SE OS 3 LADOS FOREM DIFERENTES
    if(n1 != n2 && n1 != n3 && n2 != n3){
      printf("ESCALENO");
    }
  }
}


int main() {
  int n1, n2,n3;

  // ENTRADA DE DADOS
  scanf("%d %d %d", &n1, &n2, &n3);

  // CHAMA PROCEDIMENTO
  triangulo(n1, n2, n3);

  return 0;
}