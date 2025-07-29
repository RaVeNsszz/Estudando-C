#include <stdio.h>
#include <stdlib.h>

int main() {

    //IF
    int x,y = -1;
    printf("Digite um valor inteiro:");
    scanf("%d",&x);

    if((x % 2 == 0) || (x < 0)){
        printf("O valor e par ou negativo\n");
    }
    //ou
    if ((x % 2 == 0) || (x < 0))
        printf("O valor e par ou negativo\n");
    // Ultilizar sem chaves quando possue apenas um comando

    if (x > 0){
        y = x % 3;
        printf("O resto de %d/3 : %d\n", x,y);
    }
    printf("Fim de Programa\n");

    //ELSE

    int x;
    printf("Digite um valor inteiro:");
    scanf("%d",&x);
    if (x%2 == 0){
        printf("O valor e PAR.\n");
    }else{
        printf("O valor e IMPAR.\n");
    }

    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num == 0){
        printf("O numero e igual a 0. \n");
    } else {
        if (num > 0)
            printf("O numero maior do que 0.\n");
        else
            printf("O numero e menor do que 0.\n");
    }

    // OPERADOR TERNARIO

    int x,y,z;
    printf("Digite x: ");
    scanf("%d",&x);
    printf("Digite y: ");
    scanf("%d",&y);

    z = x > y ? x: y;

    // ou posso ignorar a atribuição
    (x > y)? printf("X e o maior.\n")
            :printf("y e maior.\n");

    printf("Maior: %d\n",z);

    // COMANDO SWITCH
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c",&ch);
    switch (ch){
    case '.': printf("Ponto.\n"); break; 
    case ',': printf("Virgula.\n"); break;
    case ':': printf("Dois pontos.\n"); break;
    case ';': printf("Ponto e virgula.\n"); break;
    default : printf("Nao e pontuacao.\n");
    }


    printf("Fim do Programa.\n");
    system("pause");
    return 0;
}