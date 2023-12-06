//NUMERO1
#include <stdio.h>

float validaQuantidade(int quantidade) {
    if (quantidade <= 50) return 0;
    if(quantidade > 50 && quantidade <= 80)  {
        int pecas_com_adicional = quantidade - 50;
        return pecas_com_adicional * 0.5f;
    }

    float adicional = ((quantidade - 80) * 0.75f) + (30 * 0.50f);
    return adicional;
}

float calculaSalario(float adicional) {
    float final = (float) 600 + adicional;
    return final;
}

void mostraFinal(float salario) {
    printf("Valor total: %.2f \n", salario);
}

int main() {
    int quantidade;

    int iteracao = 1;
    do {
        printf("Salario do funcionario %d \n", iteracao);
        printf("Informe a quantidade de pecas produzidas no mes (-1 para encerrar): ");
        scanf("%d", &quantidade);

        if(quantidade != -1) {
            float adicional = validaQuantidade(quantidade);
            float salario = calculaSalario(adicional);
            mostraFinal(salario);
        }

        iteracao++;

    } while (quantidade != -1.f);

    printf("FIM DE PROGRAMA \n");

    return 0;
}



//NUMERO 2
#include <stdio.h>

int classificaSalario (float salario, int *maior_minimo, int *menor_minino) {
    if (salario > 1400) {
        *maior_minimo = *maior_minimo+1;
        return 1;
    }
    if (salario == 1400) return 0;
    if (salario < 1400) {
        *menor_minino = *menor_minino+1;
        return -1;
    }
}

void mostraClassifica (char sexo, float salario, int status) {
    printf("Sexo: %s \n", sexo == 'M' || sexo == 'm' ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f \n", salario);
    if(status == -1) {
        printf("Salario menor que o minimo \n");
    } else if(status == 0) {
        printf("Salario igual que o minimo \n");
    } else {
        printf("Salario maior que o minimo \n");
    }
    printf("\n");
}

int main () {
    int iteracao = 1;
    char sexo;
    float salario;
    int maior_minimo = 0;
    int menor_minimo = 0;

    do {

        printf("Salario do funcionario %d \n", iteracao);
        printf("Informe M(Masculino) ou F(Feminino): ");
        scanf("%s", &sexo);
        printf("Informe o salario: ");
        scanf("%f", &salario);

        if(salario > 1) {
            mostraClassifica(sexo, salario, classificaSalario(salario, &maior_minimo, &menor_minimo));
        }

        iteracao++;
    } while (salario > 1);

    printf("TOTAL DE FUNCIONARIOS \n");
    printf("Num. de funcionarios que ganham um salario maior que o minimo: %d \n", maior_minimo);
    printf("Num. de funcionarios que ganham um salario menor que o minimo: %d \n", menor_minimo);

    return 0;    
}
