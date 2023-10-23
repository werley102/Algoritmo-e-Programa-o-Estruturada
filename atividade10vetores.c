#exec15
#include<stdio.h>
#include<math.h>

int main(){
  int A[20];

  printf("Digite 20 numeros\n");
    
  for(int i = 0; i<20; i++){
    scanf("%d", &A[i]);
  }

  int j = 0;
  
  for(int i = 0; i<20; i++){
    if(A[j] != A[i+1]){
      printf("\n%d", A[i]);
      j++;
    }
  }
}

#exec16

#include<stdio.h>
#include<math.h>

int main(){
  int A[5], codigo;

  printf("Digite 5 numeros\n");
    
  for(int i = 0; i<5; i++){
    scanf("%d", &A[i]);
  }

  printf("Digite o comando desejado:\n1 - Ordem direta\n2 - Ordem inversa\n0 - Sair\n");
  scanf("%d", &codigo);

  switch(codigo){
    case 1:
      for(int i = 0; i<5; i++){
        printf("\n%d", A[i]);
      }
      break;
    case 2:
      for(int i = 4; i>=0; i--){
        printf("\n%d", A[i]);
      }
      break;
    case 0:
      printf("\nFinalizando");
      break;
    default:
      printf("\nComando invalido");
      break;
  }
}

#exec17
#include<stdio.h>
#include<math.h>

int main(){
  int A[10], codigo;

  printf("Digite 10 numeros\n");
    
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  for(int i = 0; i<10; i++){
    if(A[i] < 0){
      A[i] = 0;
    }
    printf("\n%d", A[i]);
  }
}

#exec18
#include<stdio.h>
#include<math.h>

int main(){
  int A[10], multiplos[10];

  printf("Digite 10 numeros\n");
    
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  int x;
  printf("Digite uma posição de 0 a 9\n");
  scanf("%d", &x);

  for(int i = 0; i < x; i++){
    multiplos[i] = A[i] * A[x];
    printf("Os multiplos são:%d\n", multiplos[i]);
  }
}

#exec19
#include <math.h>
#include <stdio.h>

int main() {
  int A[50];

  for (int i = 0; i < 50; i++) {
    A[i] = (i + (5 * i)) % (i + 1);
    printf("%d\n", A[i]);
  }
}

#exec20
#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], confirmador = 0;

  printf("Digite 10 numeros entre 0 a 50:\n");

  for (int i = 0; i < 10; i++) {
    do {
      scanf("%d", &A[i]);
      if (A[i] < 0 || A[i] > 50) {
        printf("Numero invalido: %d\nComece do inicio:", A[i]);
      }
    } while (A[i] < 0 || A[i] > 50);
  }

  int j = 0;

  for (int i = 0; i < 10; i++) {
    if (A[i] % 2 != 0) {
      B[j] = A[i];
      j++;
    }
  }
  for (int i = 0; i < 10; i++) {
    if (i < j) {
      printf("Primeiro vetor: %d, Segundo vetor: %d\n", A[i], B[i]);
    } else {
      printf("Peimeiro vetor: %d\n", A[i]);
    }
  }
}

#exec21
#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], C[10], total;

  printf("Digite 10 numeros para o vetor A:\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", &A[i]);
  }
  
  printf("Digite 10 numeros para o vetor B:\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", &B[i]);
  }
  
  for (int i = 0; i < 10; i++){
    C[i] = A[i] - B[i];
    printf("%d - %d = %d\n", A[i], B[i], C[i]);
  }
  for (int i = 0; i < 10; i++){
    total += C[i]; 
  }
  printf("Subtração total é: %d\n", total);
}
#exec22
#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], C[20];

  printf("Digite 10 numeros para o vetor A:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite 10 numeros para o vetor B:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < 10; i++) {
    C[i * 2] = A[i];
    C[2 * i + 1] = B[i];
  }

  printf("O vetor C:");
  for (int i = 0; i < 20; i++) {
    printf("%d\n", C[i]);
  }
}
#exec23
#include <math.h>
#include <stdio.h>

int main() {
  int A[5], B[5], C = 0;

  printf("Digite 5 numeros para primeiro conjunto:\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite 5 numeros para o segundo conjunto:\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &B[i]);
  }
  
  for (int i = 0; i < 5; i++){
    printf("Conjunto A: %d, conjunto B:%d\n", A[i], B[i]);
  }
  
  //produto escalar
  for (int i = 0; i < 5; i++) {
    do {
      C += (A[i] * B[i]);
    } while (i > 4);
  }
  printf("Produto escalar: %d", C);
}

#exec24

#include <math.h>
#include <stdio.h>

int main() {
  int A[10];
  float B[10];

  printf("Digite o numero do aluno e sua altura:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d, %f", &A[i], &B[i]);
  }

  // Aluno mais alto
  float maiorAltura = 0;
  int numeroMaior = 0;
  for (int i = 0; i < 10; i++) {
    if (B[i] > maiorAltura) {
      maiorAltura = B[i];
      numeroMaior = A[i];
    }
  }

  // Aluno menos alto
  float menorAltura = 0;
  int numeroMenor = 0;
  for (int i = 0; i < 10; i++) {
    if (B[i] < menorAltura) {
      menorAltura = B[i];
      numeroMenor = A[i];
    }
  }

  printf("O aluno mais alto é o %d com %.2f metros\n", numeroMaior,
         maiorAltura);
  printf("O aluno menor é o %d com %.2f metros\n", numeroMenor, menorAltura);
}

#exec25
#include <math.h>
#include <stdio.h>

main() {
  int A[100], numero = 1, i = 0;

  while (i < 100) {
    if (numero % 7 != 0 && numero % 10 != 7) {
      A[i] = numero;
      i++;
    }
    numero++;
  }
  
  for (int i = 0; i < 100; i++) {
    printf("%d\n", A[i]);
  }
}

#exec26
#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10];
  float total = 0, media, raiz = 0;
  float mediaB, totalB = 0;

  printf("Digite os 10 elementos do conjunto:\n");
  
  for(int i = 0; i < 10; i++){
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < 10; i++){
    total += A[i];
  }
  
  media = total / 10;
  
  for(int i = 0; i < 10; i++){
    A[i] = A[i] - media;
    B[i] = pow(A[i], 2);
    totalB += B[i];
  }
  
  mediaB = totalB / 10;
  
  raiz = sqrt(mediaB);
  
  printf("O desvio padrão do conjunto é: %.2f", raiz);
}

#exec27
#include <stdio.h>

int main() {
  int numeros[10];

  printf("Digite 10 números inteiros::\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &numeros[i]);
  }

  printf("Números primos e suas posições no vetor:\n");
  for (int i = 0; i < 10; i++) {
    int numero = numeros[i];
    if (numero <= 1) {
      continue;
    }

    int primo = 1;
    for (int j = 2; j * j <= numero; j++) {
      if (numero % j == 0) {
        primo = 0;
        break;
      }
    }

    if (primo) {
      printf("Número primo: %d (Posição %d)\n", numero, i);
    }
  }
  return 0;
}

#exec28
#include <stdio.h>

int main() {
  int V[10], v1[10], v2[10];
  int num1 = 0, num2 = 0;

  printf("Digite 10 números inteiros::\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &V[i]);
  }

  for (int i = 0; i < 10; i++) {
    if (V[i] % 2 == 0) {
      v2[num2] = V[i];
      num2++;
    } else {
      v1[num1] = V[i];
      num1++;
    }
  }

  printf("Numeros pares:\n");
  for (int i = 0; i < num2; i++) {
    printf("%d\n", v2[i]);
  }

  printf("Numeros impares:");
  for (int i = 0; i < num1; i++) {
    printf("%d\n", v1[i]);
  }
}
