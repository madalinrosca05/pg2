#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "splitFields.h"

int main(){

    #define MAX_FIELDS 10
    #define MAX_CHARS 255
    char *fields[MAX_FIELDS];
    char s[MAX_CHARS];
    fgets(s, MAX_CHARS, stdin);
    int n = splitFields( s, fields, MAX_FIELDS );
    for( int i = 0; i < n && i < MAX_FIELDS; ++i ){
        if(i!= MAX_FIELDS){printf( "{%s}", fields[i] );}
        else{printf("{%s}\n", fields[i]);}
    }

    return 0;
}