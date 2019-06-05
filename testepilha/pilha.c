#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
    int no[20];
    int topo;
};

Pilha criaPilha(){
    Pilha P = malloc(sizeof(Pilha));
    if(P == NULL){
        printf("Nao foi possivel criar a pilha.\n");
        return NULL;
    }
    else{
        P->topo = 0;
        return P;
    }
}

int pilhaVazia(Pilha P){
    if(P->topo == 0){
        printf("Pilha vazia. ");
        return 1;
    }
    else
        return 0;
};

int pilhaCheia(Pilha P){
    if(P->topo > 20){
        printf("Pilha cheia.\n");
        return 1;
    }
    else
        return 0;
}

int push(Pilha P, int n){
    if(P == NULL || pilhaCheia(P) == 1)
        return 0;
    P->no[P->topo] = n;
    P->topo++;
    return 1;
}

int pop(Pilha P){
    if(pilhaVazia(P) == 1 || pilhaCheia(P) == 1)
        return 0;
    int n;
    P->topo--;
    n = P->no[P->topo];
    return n;
}

int leTopo(Pilha P){
    if(pilhaVazia(P) == 1)
        return 0;
    return P->no[P->topo-1];
}
