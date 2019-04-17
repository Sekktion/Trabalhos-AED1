#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lista.h"
#include "OutrasFuncs.h"

struct lista{
    int no[11];
    int Fim;
};

Lista cria_lista(){
    Lista L;
    L = (Lista ) malloc(sizeof(Lista));
    if(L != NULL)
        L->Fim = 0;
    return L;
}

int lista_vazia(Lista L){
    if(L->Fim == 0)
        return 1;
    return 0;
}

int lista_cheia(Lista L){
    if(L->Fim == 11){
        printf("Lista cheia! Exclua alguns elementos ou crie uma nova!\n\n");
        return 1;
    }
    return 0;
}

int insere_elem(Lista L, int num){
    if(L != NULL && lista_cheia(L) == 0){
        L->no[L->Fim] = num;
        L->Fim++;
        return 1;
    }
    return 0;
}

int remove_elem(Lista L, int num){
    int i=0;
    if(lista_vazia(L) == 1)
        return 0;
    if(num == L->no[L->Fim-1]){
        L->Fim--;
        return 1;
    }
    for(i=0;i<L->Fim;i++){
        if(L->no[i] == num){
            while(i<L->Fim){
                L->no[i] = L->no[i+1];
                i++;
            }
            L->Fim--;
            return 1;
        }
    }
    return 0;
}

void imprime_lista(Lista L){
    int i=0;
    printf("Lista atual: \n");
    printf("{");
    for(i=0;i<L->Fim;i++){
        printf(" %d ", L->no[i]);
    }
    printf("}\n\n");
}
