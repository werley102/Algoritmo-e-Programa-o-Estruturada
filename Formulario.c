#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nome[20] ;
    char Idade[20];
    char Matricula[20];
    char Endereco [10];
    char Curso [20];
    char Periodo [20];
    char Disciplina [20];
    char Valor_Mensalidade [20];


    printf("Digite o Nome" );
    fgets(Nome, 20, stdin);
    printf("Nome: %s", Nome);

    printf("Digite a Idade" );
    fgets(Idade, 20, stdin);
    printf("Idade: %s", Idade);

    printf("Digite a Matricula" );
    fgets(Matricula, 20, stdin);
    printf("Matricula: %s", Matricula);

    printf("Digite o Endereço" );
    fgets(Endereco, 20, stdin);
    printf("Endereço: %s", Endereco);

    printf("Digite o Curso" );
    fgets(Curso, 20, stdin);
    printf("Curso: %s", Curso);

    printf("Digite o Periodo" );
    fgets(Periodo, 20, stdin);
    printf("Periodo: %s", Periodo);


    printf("Digite as Disciplina" );
    fgets(Disciplina, 20, stdin);
    printf("Disciplina: %s", Disciplina);

    printf("Digite o Valor da Mensalidade" );
    fgets(Valor_Mensalidade, 20, stdin);
    printf("Valor da Mensalidade: %s", Valor_Mensalidade);


    return 0;

}
