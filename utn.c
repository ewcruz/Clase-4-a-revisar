#include <stdio.h>
#include <stdlib.h>

void utn_pruebita (void)
{
    printf("hola mundo desde utn.c\n");
}

int utn_getNumber(int* pNumero,int max,int min,char* msg,char* msgError, int cantIntentos)
{
    int numero;
    int ret;
    int cantIntentos;

    ret=-1;


    while(cantIntentos>0)
    {
        printf("%s",msg);
        if(scanf("%d",&numero)==1);


    if(numero>min&&numero<max)
    {
        (*pNumero)=numero;
        ret=0;
        break;
    }

    printf("%s",msgError);
    cantIntentos--;

    return ret;

    }

}
