#include <stdio.h>

int main(){
    //Exercício de Fixação
    /*
    Crie um programa em C que realize as seguintes etapas:
    - Abra (ou crie) um arquivo chamado mensagem.txt no modo escrita (w).
    - Peça ao usuário que digite uma frase (use fgets() para capturar).
    - Grave essa frase no arquivo usando fputs().
    - Em seguida, grave caractere por caractere a palavra "FIM" no final do arquivo, usando fputc().
    - Feche o arquivo.
    */

    FILE *arquivo;
    char frase[100];
    arquivo = fopen("mensagem.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite uma frase: ");
    // fgets(frase, sizeof(frase), stdin); // Lê a frase com espaços
    scanf(" %[^\n]", frase); // Lê a frase com espaços
    fputs(frase, arquivo); // Grava a frase no arquivo
    fputc('\n', arquivo); // Adiciona uma nova linha após a frase
    fputs("FIM", arquivo); // Grava a palavra "FIM" no final do arquivo
    fclose(arquivo); // Fecha o arquivo

    /*
    - Agora abra o mesmo arquivo no modo leitura (r).
    - Leia o conteúdo caractere por caractere, usando fgetc().
    - Exiba cada caractere na tela até encontrar EOF.
    */
    arquivo = fopen("mensagem.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    char c;
    printf("Conteúdo do arquivo:\n");
    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c); // Exibe o caractere na tela
    }
    fclose(arquivo); // Fecha o arquivo após a leitura
    return 0;
 
}