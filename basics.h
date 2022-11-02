#ifndef BASICS_H
/*
Biblioteca com simplificações para facilitar a programação em C
Larissa de Brito - 2022
*/
#define BASICS_H

#include <stdio.h>
#include <stdlib.h>
#define True 1
#define False 0

// Limpa o prompt do terminal (não tem retorno)
void limpaTela();

// Remove qualquer caracter que não deve ser utilizado pelo scanf (não tem retorno)
void limpaBufferEntrada();

// Pausa o programa. Útil para menus e debugs (não tem retorno)
void pausa();

//Retorna a opção escolhida pelo usuário através de um valor inteiro. Para uso em menus
int recebeOpcInt();

#endif
