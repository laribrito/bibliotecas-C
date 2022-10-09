#ifndef VETORES_FLOAT_H
#define VETORES_FLOAT_H

void criaVetorF(float** aux, int tam);

void preencheVetorF(float* vetor,int tam);

void exibeVetorF(float* vetor, int tam, char nome[]);

void adeusVetorF(float*);

// EDGAR - UESC // A função deve retornar o tamanho do vetor C
float uniaoUnicaF(float *A, int n, float *B, int m, float *C);

// Retorna 1 se encontrar o elemento E no vetor V (de tamanho T), 0 se não
float contidoF(float elemento, float *vetor, int tam);

// EDGAR - UESC // Retorna um ponteiro para o maior valor presente no vetor V (de tamanho n)
float* maxF(float *V, int n);

#endif
