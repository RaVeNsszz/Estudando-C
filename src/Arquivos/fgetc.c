#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }
    char c;
    int i;
    // Lê o arquivo, um caractere por vez
    for ( i = 1; i <= 10; i++){
        c = fgetc(f);
        printf("%c",c);
    }
    
    //Para ler todo o arquivo, use um loop while
    //while((c = fgetc(f)) != EOF) {
    //    printf("%c", c);     
    //}
    c = fgetc(f);
    while(!feof(f)) {
        printf("%c", c);     
        c = fgetc(f);
    }



    printf("\nFim\n");
    fclose(f);
    system("pause");
    return 0;
}