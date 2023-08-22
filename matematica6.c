#include<stdio.h>
#include<math.h>

main() {

int anos , meses , dias,  totaldias;  


printf("\n Quantos anos voce tem: ");
scanf("%d",&anos);

printf("\n Quantos meses voce tem: ");
scanf("%d",&meses);

printf("\n Quantos dias voce tem: ");
scanf("%d",&dias);

totaldias = anos*365 + meses*30 + dias;


printf("O total de dias vividos e: %d", totaldias);

return 0; 
}


