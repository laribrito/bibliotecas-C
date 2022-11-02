#ifndef VETORES_FLOAT_H
/*
Biblioteca para manipulação de vetores de floats
Larissa de Brito - 2022
*/
#define VETORES_FLOAT_H

/*
Recebe o endereço do ponteiro que vai armazenar 
o vetor de floats e seu tamanho (não tem retorno)
*/
void criaVetorF(float** aux, int tam);

/*
Recebe o ponteiro do vetor de floats e seu tamanho, e preenche 
todo o vetor de floats (não tem retorno)
*/
void preencheVetorF(float* vetor,int tam);

/*
Recebe o ponteiro do vetor de floats, seu tamanho e um apelido
que vai aparecer junto com seus dados na exibição (não tem retorno)
*/
void exibeVetorF(float* vetor, int tam, char nome[]);

// Recebe o ponteiro do vetor de floats e libera a memória (não tem retorno)
void adeusVetorF(float*);

/*
Recebe o ponteiros de floats de um vetor A, seu tamanho,
o ponteiro de floats do vetor B, seu tamanho, e o ponteiro
de floats do vetor C. O vetor C vai recebe todos os elementos
de A e B, SEM REPETIÇÃO (e sem ordem definida), e seu tamanho será retornado na função
através de um inteiro
*/
int uniaoUnicaF(float *A, int n, float *B, int m, float *C);

// Retorna 1 se encontrar o elemento E no vetor V (de tamanho T), 0 se não
int contidoF(float elemento, float *vetor, int tam);

// Retorna um ponteiro para o maior valor presente no vetor V (de tamanho n)
float* maxF(float *V, int n);

#endif
