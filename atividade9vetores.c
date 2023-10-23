#exec01
#include<stdio.h>
#include<math.h>

int main(){
  int A[7] = {1, 0, 5, -2, -5, 7};
  
  A[6] = A[0] + A[1] + A[5];
  A[4] = 100;

  for(int i = 0; i < 6; i++){
    printf("\n%d", A[i]);
  }
  printf("\nA soma dá %d", A[6]);
}

#exec02
#include<stdio.h>
#include<math.h>

int main(){
  int A[7];

  printf("Digite 6 números inteiros:\n");
  for(int i=0; i < 6; i++){
    scanf("%d", &A[i]);
  }
  for(int i=0; i < 6; i++){
    printf("Os valores digitados foram:%d\n", A[i]);
  }
}

#exec03
#include<stdio.h>
#include<math.h>

int main(){
  int A[10] = {22,25,98,67,45,21,38,17,46,79}, B[10];

  for(int i=0; i<10; i++){
    printf("Valores:%d\n", A[i]);
  }
  for(int i=0; i<10; i++){
    B[i] = A[i] + A[i];
    printf("Quadrado:%d\n", B[i]);
  }
}

#exec04
#include<stdio.h>
#include<math.h>

int main(){
  int A[8];
  int X, Y;

  printf("Digite 8 valores quaisquer\n");
  for(int i=0; i < 8; i++){
    scanf("%d", &A[i]);
  }

  printf("Digite a posição desejada(0 a 7)\n");
  scanf("%d %d", &X, &Y);

  if(X >= 0 && X < 8 && Y >= 0 && Y < 8){
    int soma = A[X] + A[Y];
    printf("A soma é:%d\n", soma);
  }else{
    printf("valor digitado não valido\n");
  }
}

#exec05

#include<stdio.h>
#include<math.h>

int main(){
  int A[11];

  printf("Digite 10 valores inteiros\n");
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 0; i<10; i++){
    if(A[i] % 2 == 0){
      printf("par: %d\n", A[i]);
    }
  }
}

#exec06

#include<stdio.h>
#include<math.h>

int main(){
  int A[11], valorMaior = 0;

  printf("Digite 10 valores inteiros\n");
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  int valorMenor = A[0];
  
  for(int i = 0; i<10; i++){
    if(A[i] > valorMaior){
      valorMaior = A[i];
    }else if(A[i] < valorMenor){
      valorMenor = A[i];
    }
  }
  printf("Maior valor:%d", valorMaior);
  printf("Menor valor:%d", valorMenor);
}

#exec07
#include<stdio.h>
#include<math.h>

int main(){
  int A[11], posicao;

  printf("Digite 10 valores inteiros\n");
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  int valorMaior = A[0];
  
  for(int i = 0; i<10; i++){
    if(A[i] > valorMaior){
      valorMaior = A[i];
      posicao = i;
    }
  }
  printf("Maior valor:%d\nNa posição:%d", valorMaior, posicao);
}

#exec08
#include<stdio.h>
#include<math.h>

int main(){
  int A[6];

  printf("Digite 6 valores inteiros\n");
  for(int i = 0; i<6; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 5; i>=0; i--){
    printf("%d\n", A[i]);
  }
}

#exec09
#include<stdio.h>
#include<math.h>

int main(){
  int A[6], n;

  do{ 
    n = 0;
    printf("Digite 6 valores inteiros pares\n");
    
    for(int i = 0; i<6; i++){
      scanf("%d", &A[i]);
    }

    for(int i = 0; i<6; i++){
      if(A[i] % 2 != 0){
        printf("O valor não é par\n");
        n = 1;
      }
    }
  }while(n != 0);

  for(int i = 5; i >=0; i--){
    printf("%d", A[i]);
  }
}

#exec10
#include<stdio.h>
#include<math.h>

int main(){
  int A[15], total = 0, media;

  printf("Digite as notas dos alunos\n");
    
  for(int i = 0; i<15; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 0; i<15; i++){
    total += A[i];
  }  
  media = total / 15;
  printf("A média é %d", media);
}

#exec11
#include<stdio.h>
#include<math.h>

int main(){
  int A[10], contadorNegativo = 0, totalPositivo = 0;

  printf("Digite 10 numeros\n");
    
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 0; i<10; i++){
    if(A[i] < 0){
      contadorNegativo ++;
    }else{
      totalPositivo += A[i];
    }
  }
  printf("\nQuantidade numeros negativos: %d", contadorNegativo);
  printf("\nSoma dos numeros positivos: %d", totalPositivo);
}

#exec12
#include<stdio.h>
#include<math.h>

int main(){
  int A[5], totalValor=0;

  printf("Digite 5 numeros\n");
    
  for(int i = 0; i<5; i++){
    scanf("%d", &A[i]);
  }
  int menorValor = A[0], maiorValor = A[0];
  
  for(int i = 0; i<5; i++){
    totalValor += A[i];
    if(A[i]>maiorValor){
      maiorValor = A[i];
    }else if(A[i] < menorValor){
      menorValor = A[i];
    }
  }
  int media = totalValor / 5;
  printf("Maior valor:%d\n", maiorValor);
  printf("Menor valor:%d\n", menorValor);
  printf("Media:%d\n", media);
}

#exec13

#include<stdio.h>
#include<math.h>

int main(){
  int A[5], maiorPosicao, menorPosicao;

  printf("Digite 5 numeros\n");
    
  for(int i = 0; i<5; i++){
    scanf("%d", &A[i]);
  }
  int menorValor = A[0], maiorValor = A[0];
  
  for(int i = 0; i<5; i++){
    if(A[i]>maiorValor){
      maiorValor = A[i];
      maiorPosicao = i;
    }else if(A[i] < menorValor){
      menorValor = A[i];
      menorPosicao = i;
    }
  }
  printf("Maior valor: %d\nNa posição: %d\n", maiorValor, maiorPosicao);
  printf("Menor valor: %d\nNa posição: %d", menorValor, menorPosicao);
}
