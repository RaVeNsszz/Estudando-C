#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
    /*
    //PROBLEMA - leia a nota de 5 estudantes e imprima as notas maiores do que a média da turma
// ARRAY - cada posição do array é uma variável
    float notas[N], media = 0.0;
    int i;
    for (i = 0; i < N; i++){// ler 5 nº
        printf("Digite a nota do aluno %d: ",i);
        scanf("%f", &notas[i]); 
        media += notas[i]; //Atribuição
    }
    media /= N;

    for ( i = 0; i < N; i++){
        if (notas[i] > media)
            printf("Aluno %d: %f\n", i, notas[i]);
    }//Printa notas acima da média

//MATRIZ
    int mat[5][5];
    int i, j;
    for ( i = 0; i < 5; i++){
        printf("oioi");
        for (j = 0; j < 5; j++){
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
        }
        
    }

//ARRAY MULTIDIMENSIONAL

    int cub[5][5][5];
    int i, j, k;
    // preencher array de 3 dimenções com zero
    for ( i = 0; i < 5; i++){
       for ( j = 0; j < 5; j++){
        for ( k = 0; k < 5; k++){
            cub[i][j][k] = 0;
        }      
       }
    }

//INICIALIZANDO UM VETOR
    float vetor[3] = {1.5,22.1,4.56};
    //INICIALIZANDO UMA MATRIZ
    int matriz1[2][3] = {1,2,3,4,5,6};
    int matriz1[2][3] = {{1,2,3},{4,5,6}};

//SOMANDO ARRAYS
    //Soma de elementos
    int i, lista[5] = {1,2,3,4,5};
    int soma = 0;
    for ( i = 0; i < 5; i++){
        soma+= lista[i];
    printf("Soma = %d\n",soma);
    }

    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,soma = 0;
    for (i = 0 ; i < 3; i++){
        for (j = 0; j < 3; j++){
            soma += mat[i][j];
        }
    printf("Soma = %d\n", soma);
    }
*/
//MAIOR ELEMENTO DE UM ARRAY
    int i, lista[5] = {3,18,2,51,45};
    int Maior = lista[0];
    for ( i = 1; i < 5; i++){
        if (Maior < lista[i]){
            Maior = lista[i];
        }
    }
    printf("Maior = %d\n", Maior);
    

    system("pause");
    return 0;
}