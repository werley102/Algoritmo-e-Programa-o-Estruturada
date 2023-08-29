#include <stdio.h>

int main() {
int idade;
printf("Digite sua idade:");
  scanf("%d", &idade);
if(idade >= 18){
  printf("Voce e de maior \n\n");
} else{
  printf("Voce e de menor \n\n");
}   
  return 0;
}
