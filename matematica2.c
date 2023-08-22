#include<stdio.h>
#include<math.h>

main() {

int area, largura, cumprimento;

printf("\n Informe a largura e cumprimento: ");
scanf("%d",&largura); 

printf("\n Informe o cumprimento : ");
scanf("%d",&cumprimento); 

area = largura * cumprimento ;

printf("Sua area e: %d", area);

return 0; 
}
