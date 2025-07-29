#include <stdio.h>
#include <stdlib.h>

//Prototipo  da função:
int quadrado(int a);//prototipo 1
int quadrado(int);//prototipo 2

int fatorial(int n){
    int i, f = 1;
    for ( i = 1; i <= n; i++){
        f *= i;
    }
    return f;    
}
void imprime(int n){
    int i;
    for ( i = 1; i <= n; i++){
        printf("Linha %d\n",i);
    } 
}
int soma(int x, int y){
    return x + y;
}
int maior(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
void imprime_log(float x){
    if (x <= 0){
        return; //Termina a função
    }
    printf("Log = %f\n",log(x));
}
//Exemplo de passagem "Por Valor"
void imprime_log(float x);
int maior(int x, int y);
//void exibe_dados(struct aluno a);

void soma_mais_um(int *n){//n = x
    *n += 1 ;
    printf("Dentro da funcao: x = %d\n",n);
}
void somaValor(int n){
    n += 1;
}
void somaReferencia(int *n){
    *n += 1;
}
void imprime2(int *n, int m){
    // Na função continuamos usando colchete e índice
    int i;
    for ( i = 0; i < m; i++){
        printf("%d \n",n[i]);
    }   
}
void imprimeMatriz(int m[][2], int n){
    int i,j;
    for ( i = 0; i < n; i++){
        for ( j = 0; j < 2; j++){
            printf("%d \n",m[i][j]);
        }       
    }   
}
struct ponto{
    int x, y;
};
void imprimeValor(int n){
    printf("Valor = %d\n",n);
}
void somaImprimeValor(int *n){
    *n += 1;
    printf("Valor = %d\n",*n);
}
void atribui (struct ponto *p){
    //(*p).x = 10;
    //(*p).y = 20;
    // ou
    //-> Acessa o campo de uma estrutura passada por referencia
    p -> x = 10;
    p -> y = 20;
}
int main(){

    /*
    int x, y;
    printf("Digite x: ");
    scanf("%d",&x);
    y = quadrado(x);
    printf("y = %d\n",y);
    return 0;
    
    int n, i, f = 1;
    printf("Digite n: ");
    scanf("%d",&n);
    for(i = 1;i <= n; i++){
        f *= i;
    }
    printf("fatorial de n = %d\n", f);
    
    int x, y;
    printf("Digite n: ");
    scanf("%d",&x);
    y = fatorial(x);
    printf("fatorial de n = %d\n",y);
    
    //Função do tipo void não tem return
    imprime(5);
    
    int x = soma(4,5);
    printf("x = %d\n",x);
    printf("soma = %d\n",soma(2,3));
    
    int x = maior(4,5);
    printf("Maior = %d\n",x);
    
    float f;
    printf("Digite f: ");
    scanf("%f",&f);
    imprime_log(f);
    
    // Exemplo de passagem "Por Valor"
    int x = 5;
    printf("Antes da funcao: x = %d\n",x);
    soma_mais_um(x);
    printf("Depois da funcao: x = %d\n",x);
    
    // Exemplo de Passagem "Por Referência": função scanf()
    int x = 5;
    printf("Antes do scanf: x = %d\n",x); //5
    printf("Digite um numero: ");
    scanf("%d",&x);// ex.: 9
    printf("Depois do scanf: x = %d\n",x);//9
    
    //Exemplo com entrada por referencia
    int x = 5;
    printf("Antes do funcao: x = %d\n",x);
    soma_mais_um(&x);
    printf("Depois do scanf: x = %d\n",x);
    
    int x = 5;
    somaValor(x);
    printf("Depois da funcao: x = %d\n",x);
    int y = 5;
    somaReferencia(&y);
    printf("Depois da funcao: y = %d\n",y);
    
    //Função: Array vetor
    int v[5] = {1,2,3,4,5};
    imprime2(v,5);
    
    //Função: Array Matriz
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprimeMatriz(mat,3);
    */
    //Função: struct
    //Passando um campo por valor
    struct ponto p1 = {10,20};
    imprimeValor(p1.x);
    imprimeValor(p1.y);
    
    //Passando um campo por referencia
    struct ponto p2 = {10,20};
    somaImprimeValor(&p2.x);
    somaImprimeValor(&p2.y);
    //Passando um struct por referência
    struct ponto p3;
    atribui(&p3);
    printf("x = %d\n",p3.x);
    printf("y = %d\n",p3.y);
   
}
//Ex. de função
int quadrado(int a){
    return a * a;
}