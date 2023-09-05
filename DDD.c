#include <stdio.h>

 int main() {
   int ddd;
  printf("Digite o ddd de sua cidade\n");
   scanf("%d", &ddd);

   switch(ddd){
    case 61:
       printf("\nBrasilia");
      break;
    case 71:
       printf("\nSalvador");
      break;
    case 11:
       printf("\nSao Paulo");
      break;
    case 21:
       printf("\nRio de Janeiro");
      break;
    case 32:
       printf("\nJuiz de fora");
      break;
    case 19:
       printf("\nCampinas");
      break;
    case 27:
       printf("\nVitoria");
      break;
    case 31:
       printf("\nBelo Horizonte");
      break;
     
     default:
      printf("\numa cidade no Brasil sem identificação");
   }
  return 0;
}
