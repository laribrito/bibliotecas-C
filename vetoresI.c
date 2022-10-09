#include "vetoresI.h"
#include "basics.h"

void criaVetorI(int** aux, int tam){
    (*aux)=malloc(tam*sizeof(int));
}
void preencheVetorI(int* vetor,int tam){
    int valor;
    for(int i=0; i<tam; i++){
        printf("elemento[%d]: ", i+1);
        scanf("%d", &valor);
        vetor[i]=valor;
    }
}
void exibeVetorI(int* vetor, int tam, char nome[10]){
    printf("Vetor (%s) = ", nome);
    for(int i=0; i<tam; i++) printf("%d ", vetor[i]);
    printf("\n");
}
void adeusVetorI(int* vetor){
    free(vetor);
}

int uniaoUnicaI(int *A, int n, int *B, int m, int *C){
    int aux=1;
    C=realloc(C,(aux)*sizeof(int));
    C[0]=A[0];
    for (int i = 0, j=0; i < n, j<m; i++, j++)
    {
        if(!(contidoI(A[i], C, aux))){
            C=realloc(C,(++aux)*sizeof(int));
            C[aux-1]=A[i];
        }
        if(!(contidoI(B[j], C, aux))){
            C=realloc(C,(++aux)*sizeof(int));
            C[aux-1]=B[j];
        }
    }
    return aux;
}

int contidoI(int elemento, int *vetor, int tam){
    for(int x=0;x<tam; x++){
        if (vetor[x]==elemento) return True;
    }
    return False;
}
