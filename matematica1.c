#include<stdio.h>
#include<math.h>

main() {

int numero3, dobro;

printf("\n Informe um número: ");
scanf("%d",&numero3); 

if(numero3 <= 0){

    printf("numero invalido");

}else {

    dobro = numero3*2;
    printf("\n Dobro de %d = %d", numero3,dobro);
}

return 0; 
}
