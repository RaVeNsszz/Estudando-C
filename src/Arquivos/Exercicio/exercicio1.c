#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *f1, *f2;
    //Abrindo dois arquivos: um para leitura e outro para escrita
    //f1 para ler um arquivo de texto com letras minúsculas
    //f2 para escrever um arquivo de texto com letras maiúsculas
    //O arquivo f1 deve existir, enquanto f2 será criado ou sobrescrito

    f1 = fopen("arquivo.txt", "r");
    f2 = fopen("maiusculos.txt", "w");
    if(f1 == NULL || f2 == NULL){
        printf("Erro ao abrir os arquivos.\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);
    //Lê o arquivo f1, converte cada letra minúscula para maiúscula e escreve em f2
    while (c != EOF){
        fputc(toupper(c), f2); // Converte para maiúscula e escreve no arquivo f2
        c = fgetc(f1);
    }

    fclose(f1); // Fecha o arquivo de leitura
    fclose(f2); // Fecha o arquivo de escrita
    system("pause");
    return 0;

}