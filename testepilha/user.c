#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha P = criaPilha();
    push(P,10);
    push(P,12);
    printf("%d\n",leTopo(P));
    pop(P);
    printf("%d\n",leTopo(P));
    pop(P);
    printf("%d\n",leTopo(P));
    return 0;
}
