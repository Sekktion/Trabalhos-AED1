#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 1 Lab 2
/*
struct dados{   //Struct dados com o nome e o numero
    int numero; //4 bytes
    char nome[5]; //5 bytes     //Tamanho total da struct: 9 bytes
};

int manipulaUmPar(int i) //recebe o valor do v[i] da repetição na função manipula_pares()
{
    if(i%2==0) //teste simples de paridade
        i=i/2;
    return i;
}

void manipula_pares(struct dados *v, int tamanho)  //recebe o endereço do primero valor de v e o tamanho de v
{
    int i;
    int *p;
    for(i=0;i<tamanho;i++){
        setbuf(stdin,NULL);
        v[i].numero = manipulaUmPar(v[i].numero);  //chama a função manipulaUmPar() em loop para testar todos os valores de v individualmente
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
}*/

//Exercicio 2 Lab 2
/*
struct dados{   //Struct dados com o nome e o numero
    int numero; //4 bytes
    char nome[5]; //5 bytes     //Tamanho total da struct: 9 bytes
};

int manipulaUmPar(int i) //recebe o valor do v[i] da repetição na função manipula_pares()
{
    i=i/2;
    return i;
}

void manipula_pares(struct dados *v, int tamanho)  //recebe o endereço do primero valor de v e o tamanho de v
{
    int i;
    int *p;
    for(i=0;i<tamanho;i++){
        setbuf(stdin,NULL);
        if(v[i].numero%2==0){ //teste simples de paridade
            v[i].numero = manipulaUmPar(v[i].numero);}  //chama a função manipulaUmPar() em loop para testar todos os valores de v individualmente
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
}*/

//Exercicio 3 Lab 2
/*int main()
{
    int num=5;
    float real = 4.9;
    unsigned int end_real, end_num;
    end_real=&real; //variaveis recebem o valor do endereço de num e real
    end_num=&num;

    //1º Bloco
    printf("Valor de num: %d\n", num);
    printf("Endereço de num em Hex: %p\n",&num);
    printf("Endereço de num em Hex: %p\n", end_num);
    printf("Valor de end_num em Hex: %p\n", end_num);
    printf("Valor de real: %f\n", real);
    printf("Endereço de real em Hex: %p\n",&real);
    printf("Endereço de real em Hex: %p\n", end_real);
    printf("Valor de end_real em Hex: %p\n", end_real);

    //2º Bloco
    printf("Insira o novo valor de num: ");
    scanf("%d",end_num);
    printf("Insira o novo valor de real: ");
    scanf("%f",end_real);

    //3º Bloco
    printf("Valor de num: %d\n", num);
    printf("Endereço de num em Hex: %p\n",&num);
    printf("Endereço de num em Hex: %p\n", end_num);
    printf("Valor de end_num em Hex: %p\n", end_num);
    printf("Valor de real: %f\n", real);
    printf("Endereço de real em Hex: %p\n",&real);
    printf("Endereço de real em Hex: %p\n", end_real);
    printf("Valor de end_real em Hex: %p\n", end_real);

    return 0;
}*/

//Exercicio 4 Lab 2

/*int main()
{
    int num=5,*end_num;
    float real = 4.9,*end_real;
    end_real=&real;
    end_num=&num;

    //1º Bloco
    printf("Valor de num: %d\n", *end_num);
    printf("Endereço de num em Hex: %p\n", &num);
    printf("Endereço de num em Hex: %p\n", end_num);
    printf("Valor de end_num em Hex: %p\n", end_num);
    printf("Valor de real: %f\n", *end_real);
    printf("Endereço de real em Hex: %p\n", &real);
    printf("Endereço de real em Hex: %p\n", end_real);
    printf("Valor de end_real em Hex: %p\n", end_real);

    //2º Bloco
    printf("Insira o novo valor de num: ");
    scanf("%d", end_num);
    printf("Insira o novo valor de real: ");
    scanf("%f", end_real);

    //3º Bloco
    printf("Valor de num: %d\n", *end_num);
    printf("Endereço de num em Hex: %p\n",&num);
    printf("Endereço de num em Hex: %p\n", end_num);
    printf("Valor de end_num em Hex: %p\n", end_num);
    printf("Valor de real: %f\n", *end_real);
    printf("Endereço de real em Hex: %p\n",&real);
    printf("Endereço de real em Hex: %p\n", end_real);
    printf("Valor de end_real em Hex: %p\n", end_real);

    return 0;
}*/

//Exercicio 5 Lab 2
