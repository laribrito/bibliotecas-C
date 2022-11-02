#include "vetoresF.h"
#include "basics.h"

void criaVetorF(float** aux, int tam){
    (*aux)=malloc(tam*sizeof(float));
}

void preencheVetorF(float* vetor,int tam){
    float valor;
    for(int i=0; i<tam; i++){
        printf("elemento[%d]: ", i+1);
        scanf("%f", &valor);
        vetor[i]=valor;
    }
}

void exibeVetorF(float* vetor, int tam, char nome[]){
    printf("Vetor (%s) = ", nome);
    for(int i=0; i<tam; i++) printf("%f ", vetor[i]);
    printf("\n");
}

void adeusVetorF(float* vetor){
    free(vetor);
}

int uniaoUnicaF(float *A, int n, float *B, int m, float *C){
    int aux=1;
    C=realloc(C,(aux)*sizeof(float));
    C[0]=A[0];
    for (int i = 0, j=0; i < n, j<m; i++, j++)
    {
        if(!(contidoF(A[i], C, aux))){
            C=realloc(C,(++aux)*sizeof(float));
            C[aux-1]=A[i];
        }
        if(!(contidoF(B[j], C, aux))){
            C=realloc(C,(++aux)*sizeof(float));
            C[aux-1]=B[j];
        }
    }
    return aux;
}

int contidoF(float elemento, float *vetor, int tam){
    for(int x=0;x<tam; x++){
        if (vetor[x]==elemento) return True;
    }
    return False;
}

float* maxF(float *V, int n){
    float* maior = &V[0];
    for (int i = 0; i < n; i++)
    {
        if (V[i]>(*maior)) maior=&V[i];
    }
    return maior;
}
