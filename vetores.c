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
}
void adeusVetor(int* vetor){
    free(vetor);
}