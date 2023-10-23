#exec 01
include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  int n;
  double funcao, raiz;


  printf("Digite um numero positivo");
  scanf("%d", &n);

  funcao = ((5*n) + 3);
  n = pow(n,2);
  raiz = funcao / sqrt(n - 16);
  n = sqrt(n);
  printf("A função do %d é %.2f", n, raiz);
}
#exec 02
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  int contador = 0;
  float ze = 1.10, chico = 1.50;

  while(ze <= chico){
      chico +=0.02;
      ze += 0.03;
      contador ++;
  }
  printf("%d anos", contador);
  
}

#exec 03
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  int valorA, valorB, valorC;

  printf("Digite três valores distintos positivo\n");
  scanf("%d", &valorA);
  scanf("%d", &valorB);
  scanf("%d", &valorC);

  if((valorA < 1) && (valorB < 1) && (valorC < 1)){
    printf("Esses valores não são de um triangulo");
  }
  //calssificação dos triangulos//
  if((valorA != valorB) && (valorA != valorC) && (valorC != valorB)){
    printf("O triangulo é escaleno");
  }else if((valorA == valorB) && (valorA == valorC) && (valorC == valorB)){
    printf("O triangulo é equilátero");
  }else{
    printf("O triangulo é isosceles");
  }
}

#exec 04
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  int valorA, valorB, valorC;

  printf("Digite três valores distintos positivo\n");
  scanf("%d", &valorA);
  scanf("%d", &valorB);
  scanf("%d", &valorC);

  if((valorA < 1) && (valorB < 1) && (valorC < 1)){
    printf("Esses valores não são de um triangulo");
  }
  //calssificação dos triangulos//
  if((valorA != valorB) && (valorA != valorC) && (valorC != valorB)){
    printf("Triângulo Retângulo");
  }else if((valorA == valorB) && (valorA == valorC) && (valorC == valorB)){
    printf("Triângulo Acutângulo");
  }else{
    printf("Triângulo Obtusângulo");
  }
}
#exec 05
#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  float x1, x2, y1, y2;
  float subX, subY, soma, raiz;

  printf("Digite o valor de X1 e Y1");
  scanf("%f", &x1);
  scanf("%f", &y1);

  printf("Digite o valor de X2 e Y2");
  scanf("%f", &x2);
  scanf("%f", &y2);

  subX = x1-x2;
  subY = y1-y2;
  subX = pow(subX, 2);
  subY = pow(subY, 2);
  soma = subX + subY;
  raiz = sqrt(soma);

  printf("A distancia é %.4f", raiz);
}

#exec 06

#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
  float x, y;

  printf("Digite o valor de X e de Y\n");
  scanf("%f", &x);
  scanf("%f", &y);
  
  //ponto em nenhum quadrante//
  
  if(x == y && y == 0){
    printf("Origem");
  }else if(x == 0){
    printf("Eixo X");
  }else if(y == 0){
    printf("Eixo Y");
  }
  
  //ponto dentro do quadrante//

  if(x > 0 && y > 0){
    printf("Primeiro Quadrante");
  }else if(x < 0 && y > 0){
    printf("Segundo Quadrante");
  }else if(x < 0 && y < 0){
    printf("Terceiro Quadrante");
  }else if(x > 0 && y < 0){
    printf("Quarto Quadrante");
  }
}

#exec 07
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  char nome[30];
  float n1, n2, n3, mp, mediaTurma = 0, aluno = 0;
  int x;

  do {
    fflush(stdin);
    printf("Digite o seu nome\n");
    fgets(nome, 30, stdin);
    fflush(stdin);

    printf("Digite a sua nota 1\n");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Digite a sua nota 2\n");
    scanf("%f", &n2);
    fflush(stdin);

    printf("Digite a sua nota 3\n");
    scanf("%f", &n3);
    fflush(stdin);

    mp = (n1 * 2) + (n2 * 4) + (n3 * 3);
    mp = mp / 10;
    if (mp >= 7) {
      printf("%s está aprovado", nome);
    } else {
      printf("%s está reprovado", nome);
    }
    printf("\nDigite 1 para repetir ou 2 para finalizar");
    scanf("%d", &x);
    fflush(stdin);

    mediaTurma += mp;
    aluno++;
  } while (x == 1);
  mediaTurma = mediaTurma / aluno;
  printf("\nA média da turma é %.2f", mediaTurma);
}


#exec 08
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  float salario, salarioTotal = 0, mediaSalario, maiorSalario = 0, mediaFilhos;
  int filhos, totalFilhos;
  int x, habitantes = 0;
  float percentual;
  
  do{
    printf("Digite o seu salario");
    scanf("%f", &salario);

    printf("\nQuantos filhos possui?");
    scanf("%d", &filhos);
    
    //soma total das variaveis//
    
    if(salario > 0 && filhos >= 0){
    salarioTotal += salario;
    totalFilhos += filhos;
    }

    //maior salario//
    
    if(salario > maiorSalario){
      maiorSalario = salario;
    }

    if(salario <= 100){
      percentual++;
    }
    
    printf("\nDeseja repetir o formulário?\nSim - 1\n2 - Não");
    scanf("%d", &x);
    
    habitantes++;
  }while(x == 2);
  mediaSalario = salarioTotal / habitantes;
  mediaFilhos = totalFilhos / habitantes;
  percentual = (percentual * 100) / habitantes;

  printf("Média salarial é %.2f", mediaSalario);
  printf("Média de filhos é %.2f", mediaFilhos);
  printf("O maior salario é %.2f", maiorSalario);
  printf("Média salarial é %.2f", maiorSalario);
  printf("O percentual de pessoas que recebem até R$100 é %.2f", percentual);
}

#exec 09
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  int x, voto, votoNulo=0, votoBranco=0, totalVotos=0;
  int voto1=0, voto2=0, voto3=0, voto4=0;
  
  do{
    printf("Os numeros e o que cada um representa\n 1, 2, 3, 4 - Candidatos elegiveis\n 5 - nulo\n 6 - Voto em branco");
    printf("\n Digite uma das opções acima");
    scanf("%d", &voto);

    if(voto == 1){
      voto1++;
    }else if(voto == 2){
      voto2++;
    }else if(voto == 3){
      voto3++;
    }else if(voto == 4){
      voto4++;
    }else if(voto == 5){
      votoNulo++;
    }else if (voto == 6){
      votoBranco++;      
    }
    totalVotos++;
    printf("Receber um novo voto\n 1 - Sim\n0 - Não");
    scanf("%d",&x);
  }while(x == 0);
  
  printf("Total de votos no candidato 1 %d", voto1);
  printf("Total de votos no candidato 2 %d", voto2);
  printf("Total de votos no candidato 3 %d", voto3);
  printf("Total de votos no candidato 4 %d", voto4);
  printf("Total de votos nulos %d", votoNulo);
  printf("Total de votos brancos %d", votoBranco);
}

#exec 10
#include<stdio.h>
#include<math.h>
#include <string.h>

int main(){
	double codigo;
	char estado[3], maiorEstado[3], menorEstado [3];
	int indice,totalIndice , maiorIndice=0, mediaIndice, contadorIndice=0, menorIndice=0;
	int mediaVeiculos , veiculos, contadorVeiculos=0, totalVeiculos,teste;
	
	do{
		printf("Digite o código da cidade");
		scanf("%lf", &codigo);
		fflush(stdin);
		
		printf("Digite a abreviação do estado");
		fgets(estado, 3, stdin);
		fflush(stdin);
		
		printf("Digite o numero de veiculos");
		scanf("%d", &veiculos);
		fflush(stdin);
		
		printf("Digite o numero de acidentes");
		scanf("%d", &indice);
		fflush(stdin);
		
		if(maiorIndice < indice){
			maiorIndice = indice;
			strcpy(maiorEstado, estado);
		}
		if(menorIndice > indice){
			menorIndice = indice;
			strcpy(menorEstado, estado);
		}
		if(veiculos >= 1){
			contadorVeiculos++;
			totalVeiculos += veiculos;
			
		}
		if(indice >= 1){
			contadorIndice++;
			totalIndice += indice;
		}
		
		printf("Deseja repetir o formulário?\n 1-Sim\n2-Não");
		scanf("%d", &teste);
		
	}while(teste == 1);
	mediaVeiculos = totalVeiculos / contadorVeiculos;
	mediaIndice = totalIndice / contadorIndice;
	
	printf("\nO maior indice e de %d, e pertence a %s", maiorIndice, maiorEstado);
	printf("\nO menor indice e de %d, e pertence a %s", menorIndice, menorEstado);
	printf("\nO media de veiculos e %d", mediaVeiculos);
	printf("\nO media de acidentes e %d", mediaIndice);
}

