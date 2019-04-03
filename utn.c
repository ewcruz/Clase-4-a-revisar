#include <stdio.h>
#include <stdlib.h>


float getFloat(char mensaje[])
{
    int auxiliar;
    printf("%s",&mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",&mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",&mensaje);
    fflush(stdin);   //windows
    //fpurge(stdin); //linux
    scanf("%c",&auxiliar);
    return auxiliar;
}
