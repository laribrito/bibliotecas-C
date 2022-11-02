#ifndef MATRIZES_I_H
/*
Biblioteca para manipulação de matrizes
Larissa de Brito - 2022
*/
#define MATRIZES_I_H

/*
Recebe número de linhas e número de colunas e 
retorna o ponteiro de ponteiro da matriz de inteiros - sem interface
*/
int** criaMatrizI(int nLinhas, int nColunas);

/*
Rebece o ponteiro da matriz, número de linhas e número de colunas 
e preenche toda a matriz de inteiros - com interface (não tem retorno)
*/ 
void preencheMatrizI(int ** pMatriz, int nLinhas, int nColunas);

/*
Rebece o ponteiro da matriz, número de linhas e número de colunas 
e exibe a matriz de inteiros (não tem retorno)
*/ 
void exibeMatrizI(int ** pMatriz, int nLinhas, int nColunas);

/*
Recebe o ponteiro da matriz e o número de linhas e 
libera o espaço utilizado (não tem retorno)
*/
void adeusMatrizI(int** pMatriz, int nLinhas);

#endif
