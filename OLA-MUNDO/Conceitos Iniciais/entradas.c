#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main (){
    char letra;
    int nro1 = 10;
    float n = 5.25, f;
    double d;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("Letra: %c, ASCII: %d \n", letra, letra);

    printf("Digite um numero inteiro: ");
    scanf("%d", &nro1);
    printf("Numero inteiro: %d \n", nro1);

    printf("Digite um numero real: ");
    scanf("%f", &n);
    printf("Numero real: %f \n", n);

    printf("Digite um numero real (double): ");
    scanf("%lf", &d);
    printf("Numero double: %lf \n", d);

    // Atribuição
    int x = 5, y;
    y = x + 10;
    printf("x = %d, y = %d \n", x, y);

    // Atribuição simplificada
    int z = 2;
    x -= z; // x = x - z
    printf("x após subtração: %d \n", x);
    
    y *= z; // y = y * z
    printf("y após multiplicação: %d \n", y);
    
    y /= z; // y = y / z
    printf("y após divisão: %d \n", y);
    
    y %= z; // y = y % z
    printf("y após módulo: %d \n", y);

    // ATRIBUIÇÃO

    int x = 5,y;
    y = x;
    y = x + 10;
    int x, y, z;
    x = y = z = 10;
    int x = 97;
    char ch1,ch2 = 'A';
    ch1 = x;
    printf("ch1 = %c \n",ch1);
    x = ch2;
    printf("x = %d \n",x);

// Exemplo com float e int
    int y = 833;
    float f1, f2 = 5.25;
    f1 = x;
    printf("f1 = %f \n", f1);
    y = f2;
    printf("y = %d \n",y);

// Exemplo com o char e float
    float f = 97.3;
    char ch3, ch4 = 'A';
    ch3 = f;
    printf("ch3 = %c \n",ch3);
    f = ch4;
    printf("f = %f \n", f);

    return 0;
}