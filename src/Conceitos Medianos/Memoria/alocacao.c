#include <stdio.h>
#include <stdlib.h>
struct ponto{
    int x,y;
};

int main(){
    /*
    //sizeof(nome_do_tipo);

    // Exemplo:
    int x = sizeof(int);
    printf("x = %d\n", x);

    printf("char: %d\n", sizeof(char));
    printf("int: %d\n", sizeof(int));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("struct ponto: %d\n", sizeof(struct ponto));
    
    //Array de tamanho 50
    int *v = (int*) malloc(200);
    char *c = (char*) malloc(50);
    //Solução: usar sizeof()
    int *v = (int*) malloc(50 * sizeof(int));
    char *c = (char*) malloc(50 * sizeof(char));
    
    int *p;
    p = (int *) malloc(5*sizeof(int));
    if(p == NULL){
        printf("Erro: Sem Memoria!\n");
        exit(1); //Termina o programa
    }
    int i;
    for ( i = 0; i < 5; i++){
        printf("Digite p[%d]: ",i);
        scanf("%d",&p[i]);
    }
    //libera a memória alocada
    free(p);
    */

    int i;
    int *p, *p1;
    p = (int *) malloc(5*sizeof(int));
    p1 = (int *) malloc(5*sizeof(int));
    printf("calloc \t\t malloc\n");
    for(i = 0; i < 5; i++){
        printf("p1[%d] = %d \t", i, p1[i]);
        printf("p[%d] = %d \n", i, p[i]);   
    }
    free(p);
    free(p1);

}