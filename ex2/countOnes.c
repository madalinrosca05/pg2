#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

static int INT_SIZE = sizeof(unsigned int) * CHAR_BIT;



/*
Retorna a quantidade de bits com o valor um no parâmetro value.
Se houver pelo menos um bit a um e o parâmetro de saída high for válido (não NULL), a função identifica a
posição mais alta contendo bit a um e afeta a variável apontada por high.
*/
int countOnes(unsigned value, int *high){ //high é a posição do maior 1, e, value é o valor que temos de contar
    int count = 0;
    
    for(int i= 0; i< INT_SIZE; i++){
        if((value & 1) == 1){
            count ++;
            *high = i;
        } 
        value >>= 1;   //shift 1 bit para comparar no proximo ciclo
    }
    return count;
}
