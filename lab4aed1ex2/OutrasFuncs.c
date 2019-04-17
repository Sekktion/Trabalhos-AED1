#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lista.h"
#include "OutrasFuncs.h"

int menuPrincipal(){
    int escolha=0;
    while(escolha > 5 || escolha < 1){
        printf("O que gostaria de fazer?\n");
        printf("1 - Inicializar lista\n");
        printf("2 - Inserir elemento\n");
        printf("3 - Remover elemento\n");
        printf("4 - Imprimir lista\n");
        printf("5 - Sair\n\n");

        scanf("%d", &escolha);
        if(escolha > 5 || escolha < 1)
            printf("Escolha uma opcao de 1 a 5\n\n");
    }
    return escolha;
}
