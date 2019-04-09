#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 //Exercicio 1 Lab 3
/*
struct dados{
    char nome[5];
    int num;
}
typedef struct dados sd;

void manipula_pares(sd *v, int n){
    int i =0;
    for(i=0;i<n;i++){
        if(v[i].num %2 == 0){
            manipula_um_par(v,i);
        }
    }
}

void manipula_um_par(sd*valor,int i){
    valor[i].num = valor[i].num/2;
    return;
}


int main(){
    int n;
    sd *v;
    printf("Insira o numero de Structs: ");
    scanf("%d",&n);
    v = (sd*) malloc(n*sizeof(sd));

    for(int i=0;i<n;i++){
        printf("Numero da %da Struct: ",i+1);
        scanf("%d",&v[i].num);
        printf("Nome da %da Struct: ",i+1);
        setbuf(stdin,NULL);
        gets(v[i].nome);
    }

    manipula_pares(v,n);

    for(int i=0;i<n;i++){
        printf(" %d\n",v[i].num);
    }
    return 0;
}
*/

 //Exercicio 2 Lab 3
struct dados{
    char nome[5];
    int num;
};

typedef struct dados sd;

void define_struct(sd** v,int n){
    int i;
    for(i=0;i<n;i++){
        v[i] = (sd *) malloc(n*sizeof(sd));
    }

    for(i=0;i<n;i++){
        printf("Numero da %da Struct: ",i+1);
        scanf("%d",&v[i]->num);
        printf("Nome da %da Struct: ",i+1);
        setbuf(stdin,NULL);
        gets(v[i]->nome);
    }
}

void manipula_pares(sd **v, int n){
    int i;
    for(i=0;i<n;i++){
        if(v[i]->num %2 == 0){
            manipula_um_par(v, n, i);
        }
    }
}

void manipula_um_par(sd **v,int n, int i){
    v[i]->num = v[i]->num/2;
    return;
}

int main(){
    int n;
    sd **ptr;
    printf("Insira o numero de Structs: \n");
    scanf("%d",&n);
    ptr = (sd*) malloc(n*sizeof(sd*));
    define_struct(ptr,n);
    manipula_pares(ptr,n);

    for(int i=0;i<n;i++){
        printf("Valor: %d\n",ptr[i]->num);
        free(ptr[i]);
    }
    free(ptr);
  return 0;
}
