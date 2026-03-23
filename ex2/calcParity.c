#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "countOnes.h"

/*
que identifica a paridade dos bits a um no parâmetro value. Se a quantidade de bits a um for par, retorna 0;
caso contrário, retorna 1. Deve utilizar a função countOnes.
*/
int calcParity(unsigned value){
    int high = 0;
    unsigned int count = countOnes(value, &high);
    if (count % 2 == 0){
        return 0;
    }
    return 1;
}