#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcionBienvenida(char* nombre);
void funcionDespedida(char* nombre);
///void FDeLegada(void (*),(char*),char*);
void FunDeLegada(void (*punteroFuncion)(char* elDato),char* nombre);
void funcionDespedidaSin();
void funcionDespedidaMas(char* , char* );

int main()
{
    FunDeLegada(funcionBienvenida,"Natalia natalia");
    getche();
    FunDeLegada(funcionDespedida,"Natalia natalia");
    getche();
    return 0;
}

void funcionBienvenida(char* nombre)
{
    printf("bienvenida %s, a la empresa.",nombre);
}
void funcionDespedida(char* nombre)
{
    printf("vos %s estas despedida ------->",nombre);
}
void FunDeLegada(void (*punteroFuncion)(char* elDato),char* nombre)
{
    punteroFuncion(nombre);
}
