#include "matrizes.h"
#include "basics.h"

int** criaMatriz(int m, int n){
    int ** matriz=malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++) matriz[i]=malloc(n*sizeof(int));
    return matriz;
}

void preencheMatriz(int**matriz, int m, int n){
    int valor=0;
    for(int linha=0; linha<m; linha++)
        for (int coluna = 0; coluna < n; coluna++)
        {
            printf("Elemento[%d][%d]: ", linha+1,coluna+1);
            scanf("%d", &valor);
            limpaBufferEntrada();
            matriz[linha][coluna]=valor;
        }   
}

void exibeMatriz(int**matriz, int m, int n){
    for(int linha=0; linha<m; linha++){
        for (int coluna = 0; coluna < n; coluna++)
        {
            printf("%10d", matriz[linha][coluna]);
        }   
        printf("\n");
    }
}

void adeusMatriz(int** matriz, int m){
    for (int i = 0; i < m; i++) free(matriz[i]);
    free(matriz);
}