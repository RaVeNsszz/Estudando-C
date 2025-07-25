#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }
    char texto[20] = "Meu programa em C";
    int i;
    //Grava a string, caractere a caractere
    for ( i = 0; i < strlen(texto); i++){
        fputc(texto[i],f);
        //fputc(' ',f); // adiciona um espaço entre os caracteres
    }
    fclose(f); // Sempre fechar o arquivo após o uso

    system("pause");
    return 0;
    
}