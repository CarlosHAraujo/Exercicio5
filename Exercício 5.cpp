/*

**********************************************************************
* PUCMINAS S�O GABRIEL                                               *
* DISCIPLINA: LABORAT�RIO DE AED I                                   *
* PROFESSOR:  J�LIO CONWAY                                           *
* GRUPO: Carlos Ara�jo e Deyber Pimentel                             *
* PROGRAMA 5                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Declarando e inicializando vari�veis:

    float p_fabrica=0; //recebe o valor do pre�o de f�brica do carro.
    float f_dist=0; //recebe a porcentagem do distribuidor.
    float imposto=0; //recebe o valor do imposto sobre o carro.
    float p_imposto=0; //recebe o valor do carro com os impostos, mas sem a porcentagem do distribuidor.
    float p_final=0; //recebe o valor do pre�o ao cunsumidor do carro.

    //Apresentando o programa ao usu�rio:

    printf("Exercicio 5\nPrograma para calcular o valor final de um carro ao consumidor, baseado no preco de fabrica, na aliquota de imposto e na porcentagem de faturamento do distribuidor.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    // Solicitando ao usu�rio o pre�o de f�brica do carro:

    printf("Digite o valor de fabrica do veiculo:\nR$");
    scanf("%f", &p_fabrica);

    //Calculando a porcentagem do faturamento do distribuidor:

    imposto=0.45; //aliquota do imposto de 45%.
    p_imposto=p_fabrica+(p_fabrica*imposto); //valor do carro com os impostos, mas sem a porcentagem do distribuidor.

    //Calculando o preco final ao usu�rio:

    f_dist=0.28; //porcentagem de faturamento da distribuidora.
    p_final=p_imposto+(p_imposto*f_dist);

    //Mostrando preco final ao usu�rio:

    printf("O valor final ao consumidor do veiculo de preco de fabrica R$%.2f e:\nR$%.2f",p_fabrica,p_final);

    return 0;
}
