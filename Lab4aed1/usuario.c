#include <stdio.h>
#include <stdlib.h>
#include "racional.h"
int main()
{
    int Num, Den;
    racional *R1, *R2, *R3, *N1, *N2, *N3, *N4, *N5, *N6, *N7;
    R1=generate();
    R2=generate();
    N1=generate();
    N2=generate();
    N3=generate();
    N4=generate();
    if (R1 == NULL || R2 == NULL)
    {
        printf ("Nao foi possivel criar os dois numeros racionais.\n");
        return -1;
    }
    if (N1 == NULL || N2 == NULL)
    {
        printf ("Nao foi possivel criar os numeros racionais.\n");
        return -1;
    }
    if (N3 == NULL || N4 == NULL)
    {
        printf ("Nao foi possivel criar os numeros racionais.\n");
        return -1;
    }

    printf("\nEntre o numerador do 1o Racional eh: ");
    scanf("%d",&Num);
    printf("\nEntre o denominador do 1o Racional eh: ");
    scanf("%d",&Den);
    if (set_value(N1, Num, Den) == 0)
    {
        printf ("Nao foi possivel preencher o primeiro numero racional.\n");
        return -1;
    }
    printf("\nEntre o numerador do 2o Racional: ");
    scanf("%d",&Num);
    printf("\nEntre o denominador do 2o Racional: ");
    scanf("%d",&Den);
    if (set_value(N2, Num, Den) == 0)
    {
        printf ("Nao foi possivel preencher o primeiro numero racional.\n");
        return -1;
    }
    printf("\nEntre o numerador do 3o Racional eh: ");
    scanf("%d",&Num);
    printf("\nEntre o denominador do 3o Racional eh: ");
    scanf("%d",&Den);
    if (set_value(N3, Num, Den) == 0)
    {
        printf ("Nao foi possivel preencher o primeiro numero racional.\n");
        return -1;
    }
    printf("\nEntre o numerador do 4o Racional eh: ");
    scanf("%d",&Num);
    printf("\nEntre o denominador do 4o Racional eh: ");
    scanf("%d",&Den);
    if (set_value(N4, Num, Den) == 0)
    {
        printf ("Nao foi possivel preencher o primeiro numero racional.\n");
        return -1;
    }
    N5=sum(N1,N2);
    N6=sum(N3,N4);
    N7=prod(N5,N6);
    if (N7==NULL)
    {
        printf ("Nao foi possivel somar os dois numeros racionais.\n");
        return (-1);
    }
    printf("\n O valor do racional resultante do produto eh ");
    print_value(N7);
    return 0;
}
