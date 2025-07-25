#include <stdio.h>
#include <stdlib.h>
/*
// definindo uma estrutura
struct pessoa{
    char nome[50], rua [50];
    int idade, numero;
};
int main(){
    //declaração de variáveis
    char nome[50], rua[50];
    int idade, numero;

    //declaração da variável struct
    struct pessoa p;
    
    system("pause");
    return 0;
    
}
int main(){
    // Acessando os dados da estrutura
    //Cada campo (variável) da struct pode ser acessada usando o operador "."(ponto.)
    struct pessoa p;
    p.idade = 31;
    scanf("%d",&p.numero);//Comando de leitura
    gets(p.nome);//Comando de leitura
    p.numero = p.numero + p.idade - 100; //expressao
    
    system("pause");
    return 0;  
}

struct ponto2D
{
    int x, y;
};
struct ponto3D
{
    int x, y, z;
};
int main(){
    //Estruturas diferentes podem ter campos com o mesmo nome
    struct ponto2D p2;
    struct ponto3D p3;
    p2.x = 10;
    p3.x = 12;
    printf("%d %d\n", p2.x,p3.x);
    
    system("pause");
    return 0;
    
}

struct pessoa{
    char nome[50], rua [50];
    int idade, numero;
};

int main(){
    
    //Inicializando estrutura
    struct pessoa p = {"Ricardo","Rua 1",31,101};
    
    //Campos não definidos sao inicializados com zero ou uma string vazia ("")
    struct pessoa p = {"Ricardo","Rua 1",31};
    
    //Atribuição entre Estruturas
    struct pessoa p = {"Ricardo","Rua 1",31,101};
    struct pessoa p2;
    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;
   
    struct pessoa p = {"Ricardo","Rua 1",31,101};
    struct pessoa p2;
    //Estruturas suportam atribuições, desde que sajam do mesmo tipo
    p2 = p; 


    system("pause");
    return 0;
}

struct ponto
{
    int x, y;
};
struct novo_ponto
{
    int x, y;
};
*/
struct endereco{
    char rua[50];
    int numero;
};
struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender;
};



int main(){
    /*
    struct ponto p1, p2 = {1,2};
    struct novo_ponto p3 = {3,4};
    //CORRETO
    p1 = p2;
    printf("pi = %d e %d",p1.x, p1.y);
    //ERRO! TIPOS DIFERENTES
    p1 = p3;
    printf("p1 = %d e %d", p1.x, p2.x);
    
   struct pessoa p1,p2,p3,p4;
   // A STRUCT é um tipo de dado, e portanto a linguagem C suporta a declaração de um array de estrutura
   //COM STRUCT E COM ARRAY
   struct pessoa p[4];

   Acesso aos campos do array de struct
   Em um array de estruturas, o operador de ponto (.) vem depois do colchetes[] no índice do array
   
  p[0].idade = 31;
  strcpy(p[1].nome, "Ricardo");
  p[2].numero = p[0].numero - 1;

    A combinação de arrays e estruturas permite que se manipule de modo muito mais prático várias variáveis de estrutura
 

    struct pessoa p[4];
    int i;
    for(i = 0; i < 4; i++){
        gets(p[i].idade);
        scanf("%d",&p[i].idade);
        gets(p[i].rua);
        scanf("%d",&p[i].numero);
    }
    */
   struct pessoa p;
   p.idade = 31;
   p.ender.numero = 101;
   gets(p.nome);
   scanf("%d",&p.idade);
   gets(p.ender.rua);
   scanf("%d",&p.ender.numero);

}
