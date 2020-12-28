#include <stdio.h>
#include <stdlib.h>
#include "Lista_Encad.h"

struct no{
    int info;
    struct no *prox;
};

struct no *cria_lista(){
    return NULL;
};

int lista_vazia(struct no *lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_inicio(struct no **lst, int elem){   //Passagem do ponteiro por referencia pois sera modificado
   struct no *N = (struct no*)malloc(sizeof(struct no));
   if(N == NULL)
        return 0;
   N->info = elem;
   N->prox = *lst;  // Aponta para o 1 nó atual da lista
   *lst = N;    //lst recebe o endereço de N
   return 1;
}

int inverte_2primeiros(struct no **lst){
    if(lista_vazia(*lst) == 1)
        return 0;
    struct no *aux = *lst;
    struct no *aux2 = aux->prox;
    *lst = aux2;
    (*lst)->prox = aux;
    return 1;

}

int remove_elem(struct no **lst, int elem){ //Passagem do ponteiro por referencia pois sera modificado
    if(lista_vazia(*lst) == 1)
        return 0;
    struct no *aux = *lst; // Ponteiro auxiliar para o 1o nó
    if((*lst)->info == elem){
        *lst = aux->prox;
        free(aux);
        return 1;
    }
    while(aux->prox != NULL && aux->prox->info != elem)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;
    struct no *aux2 = aux->prox; // Aponta nó a ser removido
    aux->prox = aux2->prox; // Retira nó apontado p/ aux2 da lista
    free(aux2); // Libera memória alocada
    return 1;


}

void imprime(struct no *lst){
    struct no *aux = lst;
    while(aux != NULL){
        printf(" %d ",aux->info);
        aux = aux->prox;
    }
}

void menu(){
printf("\nDigite a opcao q deseja\n");
printf("--------------------------\n");
printf("Digite 1 para inserir elemento\n");
printf("Digite 2 para remover elemento\n");
printf("Digite 3 para inverter os 2 primeiros elementos\n");
printf("Digite 4 para imprimir a lista\n");

}



