#ifndef VETORES_INTEIROS_H
#define VETORES_INTEIROS_H

void criaVetorI(int**, int);
void preencheVetorI(int*,int);
void exibeVetorI(int*, int, char nome[10]);
void adeusVetorI(int*);

// EDGAR - UESC // A função deve retornar o tamanho do vetor C
int uniaoUnicaI(int *A, int n, int *B, int m, int *C);

// Retorna 1 se encontrar o elemento E no vetor V (vetor de tamanho T), 0 se não
int contidoI(int E, int *V, int T);

#endif
