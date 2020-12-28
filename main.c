#include <stdio.h>
#include <stdlib.h>
#include "Lista_Encad.h"

int main()
{
    struct lista *lst;
    lst = cria_lista();
    int opcao,elem;
    while(opcao != 0){
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("Digite o elemento que deseja inserir no final da lista\n");
                scanf("%d",&elem);
                insere_inicio(&lst,elem);
                break;
            case 2:
                printf("Digite o elemento que deseja remover da lista\n");
                scanf("%d",&elem);
                remove_elem(&lst,elem);
                break;
            case 3:
                inverte_2primeiros(&lst);
                break;

            case 4:
                printf("\nA lista eh\n");
                imprime(lst);
                break;

        }
    }

    return 0;
}
