#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[20];
    printf("Digite uma palavra: ");
    //scanf("%s",palavra);
    gets(palavra);
    printf("Palavra lida: %s\n",palavra);

    //INICIANDO ARRAY COM STRING
    char nome1[20] ={'J','o','a','o','\0'};
    printf("nome: %s\n", nome1);
    //Forma especial
    char nome2[20] = "Joao";
    printf("nome: %s\n",nome2);

    //Inserção 
    char palavra[20] = "Teste";
    printf("Palavra: %s\n",palavra);
    palavra[0] = 'L';
    printf("Palavra: %s\n",palavra);

    // As funções o '\0' é desconsiderar as posições restantes da string
    char palavra[20] = "Oitenta";
    printf("Palavra: %s\n",palavra);

    palavra[2] = '\0';
    printf("Palavra: %s\n",palavra);


    // BIBLIOTECA string.h
    //Tamanho de uma string
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);
    printf("Tamanho = %d\n",tamanho);

    //Copiando string
    char palavra[20] = "Linguagem C";
    char novapalavra[30];
    strcpy(novapalavra,palavra);
    printf("Copia = %s\n",novapalavra);

    //Concatenando strings
    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";
    strcat(palavra1,palavra2);
    printf("Palavra = %s\n",palavra1);

    //Comapando strings
    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if(strcmp(palavra1,palavra2) == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");

    // Invertendo uma string
    char str[20] = "Linguagem C";
    char str2[20];
    int i,j = 0;
    for ( i = strlen(str) - 1; i >=  0; i--)
    {
        // Amazenando a string invertida
        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0';
    printf("str2 = %s",str2);
    printf("\n");

    // Invertendo sem usar vetor
    char str[20] = "Linguagem C";
    char c;
    int i, tam = strlen(str);
    for ( i = 0; i < tam/2; i++)
    {
        c = str[i];
        str[i] = str[tam-1-i];
        str[tam - 1 - i] = c;
    }
    printf("str = %s\n",str);
    

    //Contando os caracteres
    char str[20] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";
    int i, j, total = 0;
    int tam1 = strlen(str);
    int tam2 = strlen(vogais);
    for ( i = 0; i < tam1; i++)
    {
        for ( j = 0; j < tam2; j++)
        {
            if(str[i] == vogais[j])
                total++;
                //break;
        }
        
    }
    printf("Nro vogais = %d\n", total);


    system("pause");
    return 0;
}