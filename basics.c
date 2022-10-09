#include "basics.h"

void limpaTela(){
    system("cls||clear");
    printf("\n");
}

void limpaBufferEntrada(){
    scanf("%*[^\n]");
    scanf("%*c");
}

void pausa(){
    printf("\nAperte [ENTER] para continuar\n");
    limpaBufferEntrada();
}