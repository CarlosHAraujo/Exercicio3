/*

**********************************************************************
* PUCMINAS S�O GABRIEL                                               *
* DISCIPLINA: LABORAT�RIO DE AED I                                   *
* PROFESSOR:  J�LIO CONWAY                                           *
* GRUPO: Carlos Ara�jo e Deyber Pimentel                             *
* PROGRAMA 3                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{

    //declarando e inicializando vari�veis:

    int a=0;//a recebe a base.
    int b=0;//b recebe o expoente.
    float c=0;//c e a pot�ncia.

    //Apresentando o programa ao usu�rio:

    printf("Exercicio 3\nPrograma para calcular potenciacao dado a base e o expoente.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    //Solicitando dados ao usu�rio:

    printf ("Digite o valor de A para ser a base e o valor de B para ser expoente:\nA:");
    scanf("%d", &a);
    printf ("\nB:");
    scanf("%d", &b);

    //Calculando a potencia��o:

    c=pow(a,b);

    //Mostrando resultado:

    printf ("O valor de %d elevado a %d e:\n%.f\n",a, b, c);

    return 0;
}
