#include <stdio.h>
#include <stdlib.h>

int main() //EXERCICIO 1 LAB 1
{
    int i, v[10], *p;
    printf("Insira 10 numeros de sua preferencia:\n");
    for(i=0;i<10;i++) //escaneia entrada do teclado para o vetor
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<10;i++) //testa os itens do vetor procurando por pares e devide e substitui
    {
        if(v[i]%2==0)
        {
            v[i]=v[i]/2;
        }
    }
    for(i=0;i<10;i++) //printa o vetor final
    {
        printf("%do numero: %d\n",(i+1), v[i]);
    }
    return 0;
}*/

/* //EXERCICIO 2 LAB 1
void manipula_pares(int *v, int tamanho) //recebe o endereço do primero valor de v e o tamanho de v
{
    int i;
    for(i=0;i<tamanho;i++) //repetição para testar se os numeros são pares
        if((v[i])%2==0){
            v[i]=v[i]/2;
        }
    return;
}
int main()
{
    int i, v[10], *p;
    printf("Insira 10 numeros de sua preferencia: ");
    for(i=0;i<10;i++) //escaneia entrada do teclado para o vetor
    {
        scanf("%d",&v[i]);
    }
    manipula_pares(v, 10);
    for(i=0;i<10;i++) //printa o vetor final
    {
        printf("%do numero: %d\n",i+1, v[i]);
    }
    return 0;
} */

/* //EXERCICIO 3 LAB 1
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
        v[i] = manipulaUmPar(v[i]);  //chama a função manipulaUmPar() em loop para testar todos os valores de v individualmente
    }
    return 0;
}

int main()
{
    int i, v[10];
    printf("Insira 10 numeros de sua preferencia: ");
    for(i=0;i<10;i++) //escaneia entrada do teclado para o vetor
    {
        scanf("%d",&v[i]);
    }
    manipula_pares(v, 10);
    for(i=0;i<10;i++) //printa o vetor final
    {
        printf("%do numero: %d\n",i+1, v[i]);
    }
    return 0;
}
*/
