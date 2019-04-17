#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "OutrasFuncs.h"

int main()
{
    Lista L;
    int escolha;
    printf("Bem vindo ao criador de Lista! (de no maximo 11 elementos)\n");
    while(escolha != 5) {
        escolha = menuPrincipal();
        if(escolha == 1){
            L = cria_lista();
        }
        if(escolha == 2){
            int n;
            printf("Digite um elemento a ser inserido: ");
            scanf("%d", &n);
            n = insere_elem(L, n);
            if(n==1)
                printf("Elemento inserido!\n\n");
        }
        if(escolha == 3){
            int n, i;
            printf("Digite um elemento a ser removido: ");
            scanf("%d", &n);
            i = remove_elem(L, n);
            if(i == 0)
                printf("Elemento nao pode ser removido\n\n");
            else
                printf("Elemento removido\n\n");
        }
        if (escolha == 4){
            imprime_lista(L);
        }
    }
    printf("Ate a proxima vez!\n");
    printf("Tchau!\n");

    return 0;
}
