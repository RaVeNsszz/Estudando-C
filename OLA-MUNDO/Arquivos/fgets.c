#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20];
    FILE *arq;
    arq = fopen("arquivo.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }
    /*
    char *result = fgets(str,12,arq);
    if(result == NULL){
        printf("Erro ao ler o arquivo.\n");
    } else {
        printf("Conteudo lido: %s\n", str);
    }  
    */
   
    fgets(str, 20, arq);
    printf("Conteudo lido: %s\n", str);
    
    fclose(arq); // Sempre fechar o arquivo após o uso
    system("pause");
    return 0;
}