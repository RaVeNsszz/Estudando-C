#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main(){

    const int nro = 10;
    int soma = nro + 1;
    printf("Constante %d \n",nro);
    //nro = 12; // Não é possível atribuir valor a uma constante depois de criada
    // Outra forma de declarar é: #define PI 3.1415
    float f = PI + 1; // Possível
    printf("PI = %f \n", PI);
    //PI = 12.4;// Impossível

    // OPERAÇÕES ARITMÉTICAS

    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;


    // ADIÇÃO
    printf("Adicao\n");
    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;
    printf("x1 = %d \n", x1);
    printf("ch1 = %c \n",ch1);
    printf("f1 = %f \n", f1);

    //SUBTRAÇÃO
    printf("Subtracao\n");
    x1 = x3 - x2;
    f1 = -f2;
    printf("x1 = %d \n", x1);
    printf("f1 = %f \n", f1);

    //MULTIPLICAÇÃO
    printf("Multiplicacao\n");
    x1 = x3 * x2;
    f1 = 3 * f2;
    printf("x1 = %d \n", x1);
    printf("f1 = %f \n", f1);

    //DIVISÃO
    printf("Divisao\n");
    int x4, x5 = 9;
    float f4, f5;

    x4 = x5 / 2;
    printf("x4 = %d \n",x4);
    f4 = x5 / 2;
    printf("f4 = %f \n",f4);
    f5 = x5/ 2.0;
    printf("f5 = %f \n",f5);

    // EXPRESSOES ARITMETICAS
    printf("Expressoes Aritmeticas \n");
    float f6,f7 = 5.25;
    f6 = f7 + 10 / 2.0;
    printf("f6 = %f \n",f6); 
    f6 = (f7 + 10)/ 2.0;
    printf("f6 = %f \n",f6);

    //RESTO
    printf("Resto da Divisao \n");
    int x7,x8 = 9;
    x7 = x8 % 2;
    printf("x7 = %d \n",x7);
    x7 = x8 % 5;
    printf("x7 = %d \n",x7);

//PRE E POS INCREMENTO
    //PRE
    int x = 10,y = 10;
    x++;
    ++y;
    printf("x = %d \n",x);
    printf("y = %d \n",y);
    x--;
    --y;
    printf("x = %d \n",x);
    printf("y = %d \n",y);

    //POS
    y = x++;
    printf("x = %d \n",x);
    printf("y = %d \n",y);

// ATRIBUIÇÃO SIMPLIFICADA

    int x = 10,y = 10;
    int z = 2;
    x = x - z;
    printf("x = %d \n",x);
    y -= z; // y = y - z
    printf("y = %d \n", y);
    y *= z; // y = y * z
    printf("y = %d \n", y);
    y /= z; // y = y / z
    printf("y = %d \n", y);
    y %= z; // y = y % z
    printf("y = %d \n", y);

//OPERADORES RELACIONAIS

    int x = 5, y = 3;
    printf("Resultado = %d\n", x > 4);
    printf("Resultado = %d\n", x >= y + 2);
    printf("Resultado = %d\n", x == 4);
    printf("Resultado = %d\n", x - 2 != y);

//OPERADORES LOGICOS && e ||

    //Operador E (&&): o resultado é 1 apenas se ambas as expressões também forem do contrário, o resultado é O

    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("Resultado = %d\n",r);

    r = (x%2 == 0) && (y > x);
    printf("Resultado = %d\n",r);

    // Operador OU (||): o resultado é de 1 se umas das expressões for 1 e 0 se ambas as expressões forem 0
    r = (x%2 == 0) || (y > x);
    printf("Resultado = %d\n",r);

    r = (x%2 == 0) || (y > x);
    printf("Resultado = %d\n",r);

    // Operadpr NEGAÇÃO (!): o resultado é 1 se a expressão for 0
    // o resultado é 0 se a expressão for 1
    int r, x = 5, y = 3;
    r = !(x > 2);
    printf("Resultado = %d\n",r);

    r = !((x > 7) && (x > y));
    printf("Resultado = %d\n",r);

    system("pause");
    return 0;
}