#include "matrizesI.h"
#include "basics.h"

int** criaMatrizI(int nLinhas, int nColunas){
    int ** pMatriz=malloc(nLinhas*sizeof(int*));
    for (int i = 0; i < nLinhas; i++) pMatriz[i]=malloc(nColunas*sizeof(int));
    return pMatriz;
}

void preencheMatrizI(int ** pMatriz, int nLinhas, int nColunas){
    for(int linha=0; linha<nLinhas; linha++)
        for (int coluna = 0; coluna < nColunas; coluna++)
        {
            printf("Elemento[%d][%d]: ", linha+1,coluna+1);
            scanf("%d", &pMatriz[linha][coluna]);
            limpaBufferEntrada();
        }
}

void exibeMatrizI(int** pMatriz, int nLinhas, int nColunas){
    for(int linha=0; linha<nLinhas; linha++){
        for (int coluna = 0; coluna < nColunas; coluna++)
        {
            printf("%10d", pMatriz[linha][coluna]);
        }   
        printf("\n");
    }
}

void adeusMatrizI(int** pMatriz, int nLinhas){
    for (int i = 0; i < nLinhas; i++) free(pMatriz[i]);
    free(pMatriz);
}