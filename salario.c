#include <stdio.h>

int main() {
int salario;
printf("Digite seu salario:");
    scanf("%d", &salario);
  if(salario <= 1.320f){
    printf("Voce recebe menos ou um salario minimo \n\n");
  }else{
    printf("Voce recebe mais que um salario minimo \n\n");
  }
  return 0;
}
