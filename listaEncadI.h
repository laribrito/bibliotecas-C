#ifndef LISTA_ENCAD_I_H
/*
Biblioteca para implementação e manipulação de lista encadeada para inteiro
Larissa de Brito - 2022

Por convenção, a lista encadeada será chamada
somente de lista. Ex: lista de inteiros é uma
lista encadeada de inteiros
*/
#define LISTA_ENCAD_I_H

/*
Cada nó da lista contém info, que é uma variável
inteira, e o prox, que é o ponteiro para a 
próxima informação
*/
typedef struct no{
    int info;
    struct no* prox;
} ListaInt;

/*
Recebe o endereço do ponteiro da lista de inteiros e 
a nova informação (não tem retorno)
*/
void insereInicioListaI(ListaInt** pLista, int novaInfo);

/*
Recebe o ponteiro da lista de inteiros e um apelido
para exibição (não tem retorno)
*/
void exibeListaI(ListaInt* L, char nome[]);

/*
Recebe o ponteiro da lista de inteiros e 
retorna o maior elemento da lista. A função
não testa se a lista está vazia
*/
int maiorListaI(ListaInt* lista);

/*
Retorna a quantidade de nós na lista de inteiros
*/
int lenListaI(ListaInt* lista);

/*
Recebe o endereço de lista e apaga o nó de posição n dentro da lista de inteiros (não tem retorno)

Se a posição não existir, não executa nada
*/
void rmPosListaI(ListaInt** lista, int n);

/*
Recebe o endereço de lista e apaga o primeiro nó da lista de inteiros que tenha a informação n (não tem retorno)

Se n não existir dentro da lista, não executa nada
*/
void fRmListaI(ListaInt** lista, int n);

/*
Recebe o endereço de lista e apaga todos os nós da lista de inteiros que tenha a informação n (não tem retorno)

Se n não existir dentro da lista, não executa nada
*/
void fRmAllListaI(ListaInt** lista, int n);

/*
Recebe a lista e retorna um ponteiro para outra lista com seu inverso
*/
ListaInt* inverteListaI(ListaInt* lista);

/*
Recebe a lista e retorna um ponteiro para outra lista com os números pares
*/
ListaInt* retornaParesListaI(ListaInt* lista);

#endif