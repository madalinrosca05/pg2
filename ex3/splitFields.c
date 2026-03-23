#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
/*
Esta função separa os campos existentes na string str, substituindo cada separador (‘;’) pelo terminador de string
e referenciando, nos elementos do array fields, o início dos vários campos. O parâmetro max é o
número de elementos do array fields; se forem encontrados campos quando o array estiver totalmente
ocupado, os campos excedentes são igualmente separados mas o seu endereço não é registado. A função
retorna o número de campos encontrados na string.
*/
int splitFields(char *str, char *fields[], int max ){

    char *field = strtok(str, ";");  //separa a 1ª string com o limitador e coloca o seu endereço em field
    int field_count = 0;

    while(field != NULL && field_count <= max){
        fields[field_count] = field;
        field = strtok(NULL,";"); //para continuar a percorrer a string que lhe demos em vez de repetir o 1º valor
        field_count ++;
    }
    

    return field_count;
}
