#include <stdio.h>
#include <stdlib.h>

//Exercicio 1 Lab 2

struct dados{   //Struct dados com o nome e o numero
    char nome[5]; //5 bytes
    int numero; //4 bytes     //Tamanho total da struct: 9 bytes
};

int manipulaUmPar(int i) //recebe o valor do v[i] da repetição na função manipula_pares()
{
    if(i%2==0) //teste simples de paridade
        i=i/2;
    return i;
}

void manipula_pares(int *v, int tamanho)  //recebe o endereço do primero valor de v e o tamanho de v
{
    int i;
    for(i=0;i<tamanho;i++){
        setbuf(stdin,NULL);
        v[i] = manipulaUmPar(v[i]);  //chama a função manipulaUmPar() em loop para testar todos os valores de v individualmente
    }
    return 0;
}

int main()
{
    int i;
    struct dados est[10];
    for(i=0;i<10;i++) //escaneia entrada do teclado para o vetor
    {
        printf("Insira o %do dos 10 numeros de sua preferencia: ",i+1);
        scanf("%d",&est[i].numero);
        printf("digite o %do dos 10 nomes: ", i+1);
        setbuf(stdin,NULL);
        gets(est[i].nome);
        printf("%d\n",est[i].numero);
        printf("%s\n",est[i].nome);
    }
    manipula_pares(est, 10);
    for(i=0;i<10;i++) //printa o vetor final
    {
        printf("%do numero: %d\n",i+1, est[i].numero);
    }
    return 0;
}
