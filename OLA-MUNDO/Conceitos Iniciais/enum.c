#include <stdio.h>
#include <stdlib.h>

enum semana{Domingo = 1, Segunda, Terca,
    Quarta = 7, Quinta, Sexta, Sabado};

enum escapes {retrocesso = '\b', tabulacao = '\t',novalinha = '\n'};

int main(){
    
    enum semana s;
    s = Segunda;
    printf("Valor = %d\n",s);
    
    //Definindo uma enumeração
    enum semana s1,s2,s3;
    s1 = Segunda;
    s2 = Terca;
    s3 = s1 + s2; // 1 + 2
    printf("Domingo = %d\n",Quinta); // 10
    printf("s1 = %d\n",Quarta);
    printf("s2 = %d\n",s2);
    printf("s3 = %d\n",s3);
    if (s3 == Quarta)
        printf("s3 igual a Quarta\n");

    enum escapes e = novalinha;
    printf("Teste %c de %c escrita\n",e,e);
    e = tabulacao;
    printf("Teste %c de %c escrita\n",e,e);

}