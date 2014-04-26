/*

**********************************************************************
* PUCMINAS SÃO GABRIEL                                               *
* DISCIPLINA: LABORATÓRIO DE AED I                                   *
* PROFESSOR:  JÚLIO CONWAY                                           *
* GRUPO: Carlos Araújo e Deyber Pimentel                             *
* PROGRAMA 3                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{

    //declarando e inicializando variáveis:

    int a=0;//a recebe a base.
    int b=0;//b recebe o expoente.
    float c=0;//c e a potência.

    //Apresentando o programa ao usuário:

    printf("Exercicio 3\nPrograma para calcular potenciacao dado a base e o expoente.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    //Solicitando dados ao usuário:

    printf ("Digite o valor de A para ser a base e o valor de B para ser expoente:\nA:");
    scanf("%d", &a);
    printf ("\nB:");
    scanf("%d", &b);

    //Calculando a potenciação:

    c=pow(a,b);

    //Mostrando resultado:

    printf ("O valor de %d elevado a %d e:\n%.f\n",a, b, c);

    return 0;
}
