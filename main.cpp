#include <stdio.h>
#include <stdlib.h>

#include "utn.h"


int main()
{
    printf("hola mundo desde utn.c\n");

    int a;

    utn_getNumber(a,100,0,"Ingrese su edad aqui","ingrese un numero valido");
}


