#ifndef VETORES_INTEIROS_H
/*
Biblioteca para manipulação de vetores inteiros
Larissa de Brito - 2022
*/
#define VETORES_INTEIROS_H

/*
Recebe o endereço do ponteiro que vai armazenar 
o vetor de inteiros e seu tamanho (não tem retorno)
*/
void criaVetorI(int** pVetor, int tamanho);

/*
Recebe o ponteiro do vetor de inteiros e seu tamanho, e preenche 
todo o vetor de inteiros (não tem retorno)
*/
void preencheVetorI(int* pVetor, int tamanho);

/*
Recebe o ponteiro do vetor de inteiros, seu tamanho e um apelido
que vai aparecer junto com seus dados na exibição (não tem retorno)
*/
void exibeVetorI(int* pVetor, int tamanho, char nome[10]);

// Recebe o ponteiro do vetor de inteiros e libera a memória (não tem retorno)
void adeusVetorI(int*);

/*
Recebe o ponteiros de inteiro de um vetor A, seu tamanho,
o ponteiro de inteiro do vetor B, seu tamanho, e o ponteiro
de inteiro do vetor C. O vetor C vai recebe todos os elementos
de A e B, SEM REPETIÇÃO (e sem ordem definida), e seu tamanho será retornado na função
através de um inteiro
*/
int uniaoUnicaI(int *A, int n, int *B, int m, int *C);

// Retorna 1 se encontrar o elemento E no vetor V (vetor de tamanho T), 0 se não
int contidoI(int E, int *V, int T);

#endif
