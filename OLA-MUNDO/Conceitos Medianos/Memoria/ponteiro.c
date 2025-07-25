//Estudando Ponteiros
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    //Conceitos
    int x = 10; //variável
    int *p; //ponteiro
    //Ponteiro p aponta para a variavel x
    p = &x;

    printf("x = %d\n", x);
    //printf("&x = %d\n", &x);
    //printf("p = %d\n", p);
    *p = 12;
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    
    //Atribuição
    int *p, *p1, x = 10;
    float y = 20.0;
    p = &x;
    printf("*p: %d",*p);
    p1 = p;
    printf("*p1: %d", *p1);
    p = &y;//Errado
      
    int *p = 0x5DC;
    printf("p = %d \n",p);// 1500
    p++;
    printf("p = %d \n",p);//1504
    p = p + 15;
    printf("p = %d \n",p);//1564
    p -= 2;
    printf("p = %d \n",p);//1556
    
    int *p = 0x5DC; // 1500
    char *c = 0x5DC; // 1500
    printf("p = %d\nc = %d\n", p, c); // p = 1500 c = 1500
    p++;
    c++;
    printf("p = %d\nc = %d\n", p, c); // p = 1504 c = 1501
    
    //Comparação
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;

    if(p == p1)
        printf("Ponteiros iguais\n");
    else
        printf("Ponteiros diferentes");
    
    //Ponteiro Generico
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    pp = &p2; // Endereço do int
    printf("Endereco em pp: %p\n",pp);
    pp = &p1; // Endereço do int*
    printf("Endereco em pp: %p\n",pp);
    pp = p1; // Endereço do int
    printf("Endereco em pp: %p\n",pp);
    
    void *pp;
    int p2 = 10;
    pp = &p2; // endereco do int

    //printf("Conteudo: %d\n", *pp); //ERRADO
    printf("Conteudo: %d\n", *(int*)pp); 
    
    void *p = 0x5DC;
    printf("p = %d \n",p);
    p++;
    
    //Array e ponteiros
    int vet[5] = {1,2,3,4,5};
    int *p = vet;
    int i;
    for ( i = 0; i < 5; i++){
        printf("%d\n", *(p+i));
    }
    
    int vet[5] = {1,2,3,4,5};

    printf("vet[2] = %d\n", vet[2]);
    printf("vet[2] = %d\n", *(vet+2));
    printf("vet[2] = %d\n", &vet[2]);
    printf("vet[2] = %d\n", (vet + 2));
    
    //Array de ponteiros
    // tipo_dado *nome_array[tamanho];
    int *vet[5]; //Array de 5 ponteiros
    
    int *pvet[2];
    int x = 10, y[2] = {20,30};
    pvet[0] = &x;
    pvet[1] = y;

    printf("pvet[0]: %p\n", pvet[0]); //&x
    printf("pvet[1]: %p\n", pvet[1]); //&y[0]

    printf("*pvet[0]: %d\n", *pvet[0]); //x
    printf("pvet[1][1]: %d\n", pvet[1][1]); //&y[1]
    
    // Ponteiro para Ponteiro
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    //Endereço em p2
    printf("p2: %d\n",p2);//&p
    //Conteudo do endereço
    printf("*p2: %d\n", *p2);//&x
    //Conteudo do endereço do endereço
    printf("**p2: %d\n", **p2);//x
    */
    // variável int
    int x;
    //ponteiro para int(1 nivel)
    int *p1;
    //ponteiro para ponteiro de int(2 nivel)
    int **p2;
    //ponteiro para ponteiro para ponteiro de int(3 nivel)
    int ***p3;
    
    //Acessando o conteudo
    char letra = 'a';
    char *ptrChar = &letra;
    char **ptrPtrChar = &ptrChar;
    char ***ptrPtr = &ptrPtrChar;

    printf("*ptrChar: %c\n", *ptrChar);
    printf("**ptrPtrChar: %c\n", **ptrPtrChar);
    printf("***ptrPtr: %c\n", ***ptrPtr);
    
    


    return 0;
}