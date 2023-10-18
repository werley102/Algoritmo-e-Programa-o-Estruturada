//Atividade 01//
#include<stdio.h>
#include<math.h>

main(){
	int idade, maiorIdadeA= 0, maiorIdadeB= 0, maiorIdadeC= 0 ,maiorIdadeD= 0, maiorIdadeE= 0, rep, contadorTotal = 0, contadorA = 0, contadorB = 0, contadorC = 0, contadorD = 0, contadorE = 0, porcentagemB, porcentagemC, porcentagemE, diferenca;
	char nota;
	float mediaD;
	
	do{
		printf("Qual a sua idade?");
		scanf("%d", &idade);
		
		do{
			fflush(stdin);
			printf("Dê uma nota para o filme:\n A - Ótimo\n B - Bom\n C - Regular\n D - Ruim\n E - Pessimo\n");
			scanf("%c", &nota);
			if(nota != 'A' && nota != 'B' && nota != 'C' && nota != 'D' && nota != 'E'){
				printf("A nota que escolheste não está no quadro\n");	
			}
		}while(nota != 'A' && nota != 'B' && nota != 'C' && nota != 'D' && nota != 'E');
		
		//contador de notas
		
		if(nota == 'A'){
			contadorA++;
		}
		else if(nota == 'B'){
			contadorB++;
		}
		else if(nota == 'C'){
			contadorC++;
		}
		else if(nota == 'D'){
			contadorD++;
			mediaD += idade;
		}
		else{
			contadorE++;
		}
		
		//maior idade de cada nota
		
		if(nota == 'A' && idade > maiorIdadeA){
			maiorIdadeA = idade;
		}
		else if(nota == 'B' && idade > maiorIdadeB){
			maiorIdadeB = idade;
		}
		else if(nota == 'C' && idade > maiorIdadeC){
			maiorIdadeC = idade;
		}
		else if(nota == 'D' && idade > maiorIdadeD){
			maiorIdadeD = idade;
		}
		else if(nota == 'E' && idade > maiorIdadeE){
			maiorIdadeE = idade;
		}
	
		
		contadorTotal++;
		printf("Deseja fazer outra avaliação?\n1 - Sim\n 2 - Não\n");
		scanf("%d", &rep);
	}while(rep != 2);
	
	//Mostrar os resultados
	
	mediaD = mediaD / contadorTotal;
	porcentagemB = (contadorB * 100) / contadorTotal;
	porcentagemC = (contadorC * 100) / contadorTotal;
	porcentagemE = (contadorE * 100) / contadorTotal;
	diferenca = maiorIdadeA - maiorIdadeD;
	printf("Numero de avaliações otimas:%d", contadorA);
	printf("\nPorcentagem de avaliações boas:%d%", porcentagemB);
	printf("\nPorcentagem de avaliações regulares:%d%", porcentagemC);
	printf("\nMedia das pessoas que responderam ruim:%.2f", mediaD);
	printf("\nPorcentagem de avaliações pessimas:%d%\n A maior idade foi:%d", porcentagemE, maiorIdadeE);
	printf("\nA maior idade que respondeu Otimo foi de:%d\n A maior idade que respondeu ruim foi de:%d\n E a diferença deles é de:%d", maiorIdadeA, maiorIdadeD, diferenca);
}
//Atividade 02//
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  char elevador, periodo, periodoMaisUsado, elevadorMaisUsado;
	int teste, contadorA, contadorB, contadorC, maiorElevador, morador;
  int periodoM, periodoV, periodoN, maiorPeriodo, menorPeriodo;
  int totalServicos;
  float direncaPercentual, diferencaServicos;

	do{
		do{
			fflush(stdin);
			printf("Qual elevador você mais utiliza?(Digite a letra do elevador)\nElevador A\nElevador B\nElevador C\n");
			scanf("%c", &elevador);
			if(elevador != 'A' && elevador != 'B' && elevador != 'C'){
				printf("Por favor digite a vogal do elevador\n");
			}
		}while(elevador != 'A' && elevador != 'B' && elevador != 'C');
		//contador dos elevadores//
    if(elevador == 'A'){
      contadorA++;
    }else if (elevador == 'B'){
      contadorB++;
    }else if (elevador == 'C'){
      contadorC++;
    }
    do{
			fflush(stdin);
			printf("Qual é o periodo que você mais utiliza?\nMatutino - M\nVespertino - V\nNoturno - N\n");
			scanf("%c", &periodo);
			if(periodo != 'M' && periodo != 'V' && periodo != 'N'){
				printf("Por favor digite a vogal designada\n");
			}
		}while(periodo != 'M' && periodo != 'V' && periodo != 'N');
    //contador de periodo//
    if(periodo == 'M'){
      periodoM++;
    }else if (periodo == 'V'){
      periodoV++;
    }else if (periodo == 'N'){
      periodoN++;
    }
    //periodo mais usado//
    if ((periodoM > periodoV) && (periodoM > periodoN)){
      maiorPeriodo = periodoM;
      periodoMaisUsado = 'M';
    }else  if ((periodoV > periodoM) && (periodoV > periodoN)){
      maiorPeriodo = periodoV;
      periodoMaisUsado = 'V';
    } if ((periodoN > periodoV) && (periodoN > periodoV)){
      maiorPeriodo = periodoN;
      periodoMaisUsado = 'N';
    }
    //periodo menos usado//
      if ((periodoM < periodoV) && (periodoM < periodoN)){
      menorPeriodo = periodoM;
      periodoMaisUsado = 'M';
    }else  if ((periodoV < periodoM) && (periodoV < periodoN)){
      menorPeriodo = periodoV;
      periodoMaisUsado = 'V';
    } if ((periodoN < periodoV) && (periodoN < periodoV)){
      menorPeriodo = periodoN;
      }
    //elevador mais usado//
    if ((contadorA > contadorB) && (contadorA > contadorC)){
      maiorElevador = contadorA;
      elevadorMaisUsado = 'A';
    }else  if ((contadorB > contadorA) && (contadorB > contadorC)){
      maiorElevador = contadorB;
      elevadorMaisUsado = 'B';
    } if ((contadorC > contadorB) && (contadorC > contadorA)){
      maiorElevador = contadorC;
      elevadorMaisUsado = 'C';
    }

    morador++;
    printf("Quer iniciar um novo formulario?\nSim - 1\nNão - 2\n");
    scanf("%d", &teste);

	}while(teste != 1);
  direncaPercentual = ((maiorPeriodo - menorPeriodo) / morador) * 100;
  totalServicos = (contadorA + contadorB + contadorC) / 3;
  diferencaServicos = (totalServicos / morador) * 100;
  printf("Periodo mais usado dos elevadores é %c", periodoMaisUsado);
  printf("O elevador mais usado é %c", elevadorMaisUsado);
  printf("A diferença do mais usado e do menos usado é %.2f", direncaPercentual);
  printf("O total de seviço é %.2f", difediferencaServicos);
}
//Atividade 03//
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

  int t1 = 0, t2 = 1, proximoTermo = 0, n;

  printf("Digite um numero positivo: ");
  scanf("%d", &n);

  printf("Fibonacci Serie: %d, %d, ", t1, t2);
  proximoTermo = t1 + t2;

  while (proximoTermo <= n) {
    printf("%d, ", proximoTermo);
    t1 = t2;
    t2 = proximoTermo;
    proximoTermo = t1 + t2;
  }
  return 0;
}
//Atividade 04//
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

  int n;

  printf("Digite um numero positivo: ");
  scanf("%d", &n);

   for (int i = 1; i <= n; i++){
      if(n % i == 0){
        printf("%d, ", i);
      }
   } 
  return 0;
}
//Atividade 05//
