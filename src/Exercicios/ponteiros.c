#include <stdio.h>
#include <stdlib.h>

int main(){
    // Exercício de Fixação

    /*
    Q1
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
    cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
    modificac¸ao.  
    */
   
    int inteiro;
    float real;
    char c;

    // Declaração dos ponteiros

    int *p_inteiro = &inteiro;
    float *p_real = &real;  
    char *p_char = &c;

    printf("Digite um inteiro: ");
    scanf("%d", p_inteiro);
    printf("Digite um real: ");
    scanf("%f", p_real);
    printf("Digite um caractere: ");
    scanf(" %c", p_char);
    printf("Antes da modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Caractere:%c\n", *p_inteiro, *p_real, *p_char);

    // Modificando os valores usando os ponteiros
    *p_inteiro += 10;
    *p_real += 10.0f;
    *p_char += 1; // Incrementa o caractere
    printf("Depois da modificacao:\n");
    printf("Inteiro: %d, Real: %.2f, Caractere:%c\n", *p_inteiro, *p_real, *p_char);   


    return 0; 
}