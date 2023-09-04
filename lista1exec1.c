#include <stdio.h>
#include <math.h>
float numero;
float resultado;

int main() {
  printf("Digite um numero\n");
  scanf("%f", &numero);

  if(numero >=0){
//sqrt = raiz quadrada
    resultado = sqrt(numero);
    printf("Raiz: %.2f", resultado);
    
  }   else{

          resultado = pow(numero, 2);
          printf("Quadrado: %.2f", resultado);
    
    }
  return 0;
}
