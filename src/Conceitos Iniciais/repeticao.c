#include <stdio.h>
#include <stdlib.h>
int main(){

    // WHILE
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&a, &b);
    while (a < b)
    {
        a++;
        printf("%d\n",a);
    }

    // FOR
    int a, b, c;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&a, &b);
    for (c = a; c <= b; c++)
    {
        printf("%d\n",c);
    }
    
    for (c = a; c <= b && c > 0; c++)
    {
        printf("%d\n",c);
    }
    int i, j;
    for (i = 0, j =10; i < j; i++, j--)
    {
        printf("i = %d e j = %d\n", i, j);
    }

    //DO WHILE
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&a, &b);
    do
    {
       printf("%d\n",a);
       a++;
    } while (a < b);
    
    do
    {
        printf("%d\n",a);
        a++;
    } while (a < b && a > 0);
    
    int i;
    do
    {
        printf("Escolha uma opção:\n");
        printf("(1) Opção 1\n");
        printf("(2) Opção 2\n");
        printf("(3) Opção 3\n");
        scanf("%d",&i);
    } while ((i < 1) || (i > 3));

    // ANINHAMENTO DE REPETIÇÕES
    int i,j;
    for (i = 1; i < 5; i++){
        for(j = 1; j < 5; j++){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    int i,j;
    i = 1;
    while (i < 5){
        j = 1;
        while (j < 5){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
            j++;
        }
        printf("\n");
        i++;
    }

    // MESCLANDO
    int i,j;
    i = 1;
    while (i < 5){
        for (j = 1; j < 5; j++){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
        i++;
        
    }


    // CONTINUE
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite os valor de b: ");
    scanf("%d",&b);
    while (a <= b)
    {
        a += 1;
        if (a == 5)
            continue;
        printf("%d\n",a);
    }
  
    //GOTO

    int i = 0;
    inicio:
    if (i < 5){
        printf("Numero: %d\n", i);
        i++;
        goto inicio;
    }

    // FORMA MAIS CORRETA DE SUA UTILIZAÇÃO
    int i, j, k;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            for (k = 0; k < 5; k++){
                if (i == 2 && j == 3 && k == 1)
                    goto fim;
                else
                    printf("Pos [%d, %d, %d]\n", i, j, k);
           
    }   }   }
    fim:

    printf("Fim do Programa.\n");
    system("pause");
    return 0;
}