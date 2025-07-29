#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }
    /*
    char texto[20] = "Meu programa em C";
    int retorno = fputs(texto, f);
    if (retorno == EOF){
        printf("Erro ao escrever no arquivo.\n");
    }
    */
    fputs("Hello", f);
    fputs("World", f);
    fputc('\n', f);
    //Exemplos corretos de como cominar fputs:

    fputs("Hello\n", f);
    fputs("World\n", f);
    //ou
    fputs("Hello", f);
    fputc('\n', f);
    fputs("World", f);


    fclose(f); // Sempre fechar o arquivo após o uso
    system("pause");
    return 0;
}