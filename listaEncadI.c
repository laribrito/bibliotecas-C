#include "basics.h"
#include "listaEncadI.h"

void insereInicioListaI(ListaInt** L, int I){
    ListaInt* novo = (ListaInt*) malloc(sizeof(ListaInt));
    novo->info = I;
    novo->prox = *L;
    *L=novo;
}

void exibeListaI(ListaInt* L, char nome[]){
    ListaInt* p;
    printf("Lista (%s): \n", nome);
    int x=0;
    for (p = L ; p != NULL; p = p->prox, x++)
    printf(" Info[%d]: %d\n",x, p->info);
    printf("\n");
}

int maiorListaI(ListaInt* lista){
    int maior = lista->info;
    for (ListaInt* p = lista; p != NULL; p = p->prox)
        if(p->info > maior) maior=p->info;
    return maior;   
}

int lenListaI(ListaInt* lista){
    int contador=0;
    for (ListaInt* p = lista; p != NULL; p = p->prox, contador++);
    return contador;
}

void rmPosListaI(ListaInt** lista, int n){
    if(n==1){
        *lista=(*lista)->prox;
        return;
    }
    int x=1;
    for(ListaInt* p=(*lista); p->prox!=NULL; p=p->prox, x++)
        if(x+1==n){
            ListaInt* apagado = p->prox;
            p->prox=apagado->prox;
            free(apagado);
            return;
        }
}

void fRmListaI(ListaInt** lista, int n){
    if((*lista)->info==n){
        *lista=(*lista)->prox;
        return;
    }
    for(ListaInt* p=(*lista); p->prox!=NULL; p=p->prox)
        if(p->prox->info==n){
            ListaInt* apagado = p->prox;
            p->prox=apagado->prox;
            free(apagado);
            return;
        }
}

void fRmAllListaI(ListaInt** lista, int n){
    for(ListaInt* p=(*lista)->prox, *anterior=(*lista); p!=NULL; ){
        if(p->info==n){
            ListaInt* apagado = p;
            anterior->prox=p->prox;
            p = anterior->prox;
            free(apagado);
        } else {
            anterior = anterior->prox;
            p=p->prox;
        }
    }
    if((*lista)->info==n){
        *lista=(*lista)->prox;
    }
}

ListaInt* inverteListaI(ListaInt* lista){
    ListaInt* novaLista = NULL;
    for(ListaInt* p=lista; p!=NULL; p=p->prox)
        insereInicioListaI(&novaLista, p->info);
    return novaLista;
}

ListaInt* retornaParesListaI(ListaInt* lista){
    ListaInt* novaLista = NULL;
    for(ListaInt* p=lista; p!=NULL; p=p->prox)
        if(p->info%2==0)
            insereInicioListaI(&novaLista, p->info);
    return novaLista;
}