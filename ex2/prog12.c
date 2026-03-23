#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "calcParity.h"
/*
Escreva o programa de teste prog12.c, produzindo o executável prog12, que recebe de standard input
uma sequência de valores, aplica a função calcParity a cada um deles e apresenta, em standard
output, os resultados produzidos.
*/
int main(){
    
    unsigned int num;
    int paridade;
    while (true)
    {
        printf("insira a sequência: \n");
        if (scanf("%d", &num)!= 1)
        {
            printf("valor inválido, reinicie o programa \n\n");
            break;
        }
        paridade = calcParity(num);
        if (paridade == 1)
        {
            printf("%d é Impar!\n", num);
        }else{
            printf("%d é Par!\n", num);
        }
    }
    return 0;
}

        // gcc -Wall -o prog12 prog12.c calcParity.c countOnes.c