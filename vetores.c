#include "vetores.h"
#include "basics.h"

void criaVetor(int** aux, int tam){
    (*aux)=malloc(tam*sizeof(int));
}
void preencheVetor(int* vetor,int tam){
    int valor;
    for(int i=0; i<tam; i++){
        printf("elemento[%d]: ", i+1);
        scanf("%d", &valor);
        vetor[i]=valor;
    }
}
void exibeVetor(int* vetor, int tam){
    printf("Vetor = ");
    for(int i=0; i<tam; i++) printf("%d ", vetor[i]);
    printf("\n");
}
void adeusVetor(int* vetor){
    free(vetor);
}

int uniaoUnica(int *A, int n, int *B, int m, int *C){
    int aux=1;
    C=realloc(C,(aux)*sizeof(int));
    C[0]=A[0];
    for (int i = 0, j=0; i < n, j<m; i++, j++)
    {
        if(!(contido(A[i], C, aux))){
            C=realloc(C,(++aux)*sizeof(int));
            C[aux-1]=A[i];
        }
        if(!(contido(B[j], C, aux))){
            C=realloc(C,(++aux)*sizeof(int));
            C[aux-1]=B[j];
        }
    }
    // printf("Aux: %d\n\n", aux);
    return aux;
}

int contido(int elemento, int *vetor, int tam){
    for(int x=0;x<tam; x++){
        if (vetor[x]==elemento) return True;
    }
    return False;
}
