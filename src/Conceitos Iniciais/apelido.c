#include <stdio.h>
#include <stdlib.h>
//Cria um sinônimo para int
typedef int inteiro;

// Sinônimo para "cadastro"
struct cadastro{
    char nome5[50], rua[50];
    int idade, numero;
};
typedef struct cadastro cad;

//Sinônimo complexo
typedef unsigned int positivos[5];

int main(){
    /*
    //"int" e "inteiro" são o mesmo tipo
    int x = 10;
    inteiro y = 20;
    y = y + x;
    printf("Soma = %d\n",y);
    
    struct cadastro c1;
    cad c2;
    */
    positivos v = {10,20,30,40,50};
    int i;
    for ( i = 0; i < 5; i++){
        printf("v[%d]: %d\n",i,v[i]);
    }
    
    
}