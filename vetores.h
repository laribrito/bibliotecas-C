#ifndef VETORES_H
#define VETORES_H

void criaVetor(int**, int);
void preencheVetor(int*,int);
void exibeVetor(int*, int);
void adeusVetor(int*);

// EDGAR - UESC // A função deve retornar o tamanho do vetor C
int uniaoUnica(int *A, int n, int *B, int m, int *C);

// Retorna 1 se encontrar o elemento E no vetor V (vetor de tamanho T), 0 se não
int contido(int E, int *V, int T);

#endif
