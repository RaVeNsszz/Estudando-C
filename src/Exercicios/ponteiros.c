#include <stdio.h>
#include <stdlib.h>

// Função para trocar os valores de duas variáveis inteiras usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Função para comparar dois valores inteiros e retornar o maior e o menor
void comparar(int *maior, int *menor) {
    if (*maior < *menor) {
        int temp = *maior;
        *maior = *menor;
        *menor = temp;
    }
}

int main(){
    // Exercício de Fixação

    /*
    Q1 - Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, 
    real e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel
    usando os ponteiros. Imprima os valores das variaveis antes e apos a modificacao.  
    
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
    */
    /*
    q2 - Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
    exiba o maior endereco
    
    int a = 5, b = 10;
    int *p_a = &a;
    int *p_b = &b;
    printf("Endereco de a: %p\n", (void*)p_a);
    printf("Endereco de b: %p\n", (void*)p_b); 
    if (p_a > p_b) {
        printf("O maior endereco e de a: %p\n", (void*)p_a);
    } else {
        printf("O maior endereco e de b: %p\n", (void*)p_b);
    }
    */
    /*
    q3 - Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 
    variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas variaveis
    A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B tera o valor de A.
    
    int a = 5, b = 10;
    printf("Antes da troca: A = %d, B = %d\n", a, b);
    trocar(&a, &b);
    printf("Depois da troca: A = %d, B = %d\n", a, b);
    */
    /*
    q4 - Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 
    valores de entrada e retorne o maior valor na primeira variavel e o menor valor na segunda 
    variavel. Escreva o conteudo das 2 variaveis na tela.
    */
    int x, y;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    comparar(&x, &y);
    printf("Maior: %d, Menor: %d\n", x, y);
    


    return 0; 
}