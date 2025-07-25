#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // para tolower()

enum sexo{
    FEMININO = 1, MASCULINO = 2
};
int isVogal(char c) {
    c = tolower(c); // garante comparação com letras minúsculas
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

struct Pessoa{
    int idade;
    char nome[50];
};
struct Carro{
    char modelo[10];
    float consumo;
};
void inverterETrocar(char frase[]) {
    //Q21
    
    int tam = strlen(frase);

    // Remove o \n, se existir (por causa do fgets)
    if (frase[tam - 1] == '\n') {
        frase[tam - 1] = '\0';
        tam--;
    }

    printf("Frase modificada: ");
    for (int i = tam - 1; i >= 0; i--) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            printf("*");
        } else {
            printf("%c", frase[i]);
        }
    }
    printf("\n");
}
struct Mercadoria{
    char nome[30];
    float valor;
};
float desconto(float valor, float desconto ){
    return valor - (valor * (desconto/100.0));
}


int main(){
    /*
    //Q1
    char c[20];
    scanf("%s", &c);
    printf("%s", c);
    
    //Q2
    int count = 0;
    char palavra[20];
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);  // lê a string com espaços
    while (palavra[count] != '\0' && palavra[count] != '\n') {
        count++;
    }
    printf("O comprimento da string é: %d\n", count);
    
    //Q3 
    char palavra[20];
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin); 
    if (palavra[0] == 'a'|| palavra[0] == 'A'){
        printf("%s ", palavra);
    }
    
    //Q4
    char palavra[20];
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin); 
    for (size_t i = 0; i < 4; i++){
        printf("%c ", palavra[i]);
    }
    
    //Q5
    enum sexo s;
    char nome[30];
    int idade;
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    Isso remove a quebra de linha inserida por fgets, 
    para evitar problemas ao imprimir ou comparar strings. 
    nome[strcspn(nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Sexo (Fem - 1 | Mas - 2) : ");
    ✅ scanf("%d", (int*)&s);
    Em C, enums são tratados como inteiros. A conversão (int*)&s 
    garante que o scanf armazene corretamente no enum s.
    scanf("%d",(int*)&s); // converte enum para int para usar scanf
    
    if ((s == 1)&& (idade >= 25)){
        printf("\n%s ACEITA",nome);
    }else{
        printf("\n%s NAO ACEITA",nome);
    }
    
    //Q6
    char str1[100], str2[100];
    int iguais = 1;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remover '\n' final se houver (fgets pode incluir o Enter digitado)
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    // Comparar caractere por caractere
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            iguais = 0;
            break;
        }
    }

    // Resultado
    if (iguais) {
        printf("As strings sao IGUAIS.\n");
    } else {
        printf("As strings sao DIFERENTES.\n");
    }
    
    //Q8
    char str[20];
    printf("Digite uma sequencia de numeros: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int count = 0;
    while (str[i] != '\0' && str[i] != '\n'){
        if (str[i] == '1'){
            count ++;
        }
        i++;
    }
    printf("%d",count);
    
    //Q9
    char str[20];
    printf("Digite uma sequencia de numeros: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n'){
        if (str[i] == '0'){
            str[i] = '1';
        }
        i++;
    }
    printf("%s",str);
    
    //Q10
    char str[20];
    printf("Palavra: ");
    fgets(str, sizeof(str), stdin);
    //str[strcspn(str, "\n")] = '\0';
    int tam = strlen(str);
    printf("Invertido: ");
    for (int i = tam-1; i >= 0; i--){
        printf("%c", str[i]);
    }
    
    //Q11, Q12
    char str[20];
    char substituto;
    int contador = 0;

    printf("Palavra: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
 
    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // tornar minúsculo para comparar
        if (!isVogal(c)) { //se n for vogal printa
            printf("%c", str[i]);
    
        }else{
            contador++;
        }
    }
    // Entrada do caractere substituto
    printf("\nDigite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto); // o espaço antes do %c ignora '\n' pendente
    
    // Substitui as vogais
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVogal(str[i])) {
            str[i] = substituto;
        }
    }
    // Saída
    printf("Quantidade de vogais: %d\n", contador);
    printf("Palavra modificada: %s\n", str);
    
    //q11
    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // torna o caractere minúsculo para comparação
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", str[i]);
        }
    }
    //Q13
    char frase[100];
    int contador = 0;

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contador++;
        }
    }
    printf("%d",contador);
    
    //Q14,Q15,Q16
    // Letras maiúsculas vão de 65 (A) a 90 (Z).
    //Letras minúsculas vão de 97 (a) a 122 (z).

    char palavra[30];
    char l1,l2;
    int i, j = 0;
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra),stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    //
    // Entrada das letras L1 e L2
    printf("Digite a letra a ser substituida (L1): ");
    scanf(" %c", &l1); // espaço antes do %c ignora ENTER pendente
    printf("Digite a letra substituta (L2): ");
    scanf(" %c", &l2);

    for ( i = 0; palavra[i] != '\0'; i++) {
        //Q14
        //palavra[i] += 1;
        //Q15,Q16
        //palavra[i] -=32; // minuscula para maiuscula
        //Q17
        
        if (palavra[i] != ' ') {
            palavra[j] = palavra[i];
            j++;
        }
        
        //Q18
        if (palavra[i] == l1) {
            palavra[i] = l2;
        }

    }
    //palavra[j] = '\0'; // Finaliza a string
    printf("Modiificada: %s", palavra);
    
    //Q19
    struct Pessoa pessoa[10]; 
    int count = 0;
    while (count < 10){
        printf("Digite o nome da pessoa %d: ", count + 1);
        scanf("%s", pessoa[count].nome);

        printf("Digite a idade da pessoa %d: ", count + 1);
        scanf("%d", &pessoa[count].idade);

        if (pessoa[count].idade < 0) {
            break; // termina a entrada
        }

        count++;
    }
    if (count == 0) {
        printf("Nenhuma pessoa foi registrada.\n");
        return 0;
    }
    // Inicializa mais novo e mais velho com a primeira pessoa
    int idxMaisNovo = 0;
    int idxMaisVelho = 0;

    for (int i = 1; i < count; i++) {
        if (pessoa[i].idade < pessoa[idxMaisNovo].idade) {
            idxMaisNovo = i;
        }
        if (pessoa[i].idade > pessoa[idxMaisVelho].idade) {
            idxMaisVelho = i;
        }
    }
    printf("\nMais jovem: %s (%d anos)\n", pessoa[idxMaisNovo].nome, pessoa[idxMaisNovo].idade);
    printf("Mais velho: %s (%d anos)\n", pessoa[idxMaisVelho].nome, pessoa[idxMaisVelho].idade);
    
    //Q20
    struct Carro carros[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o modelo do carro %d: ", i + 1);
        fgets(carros[i].modelo,sizeof(carros[i].modelo),stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

        printf("Digite o consumo do carro (km/l): %d: ", i + 1);
        scanf("%f", &carros[i].consumo);
        getchar(); // consome o '\n' deixado pelo scanf
    }
    //Carro mais economico
    int idxMelhor = 0;
    for (i = 1; i < 5; i++){
        if(carros[i].consumo > carros[idxMelhor].consumo) {
            idxMelhor = i;
        }
    }
    // Exibe resultados
    printf("\nCarro mais economico: %s (%.2f km/l)\n", carros[idxMelhor].modelo, carros[idxMelhor].consumo);
    printf("\nConsumo para percorrer 1000 km:\n");

    for (i = 0; i < 5; i++) {
        float litros = 1000.0 / carros[i].consumo;
        printf("%s: %.2f litros\n", carros[i].modelo, litros);
    }
    
    //Q21
    char frase1[50],frase2[50];

    printf("Frase 1: ");
    fgets(frase1, sizeof(frase1), stdin);
    printf("Frase 2: ");
    fgets(frase2, sizeof(frase2), stdin);

    printf("\n Resultado 1 frase: \n");
    inverterETrocar(frase1);

    printf("\n Resultado 2 frase: \n");
    inverterETrocar(frase2);
    
    //Q22
    struct Mercadoria mercadoria;
    printf("Add uma mercadoria: ");
    fgets(mercadoria.nome, sizeof(mercadoria.nome), stdin);
    mercadoria.nome[strcspn(mercadoria.nome, "\n")] = '\0';
    printf("Informe o valor: ");
    scanf("%f", &mercadoria.valor);
    printf("\nMercadoria: %s\nValor total: R$ %.2f\nValor com Desconto: R$ %.2f", mercadoria.nome,mercadoria.valor,desconto(mercadoria.valor, 10));
    
    //Q23
    char s[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Valor i");
    scanf("%d", &i);
    printf("Valor j");
    scanf("%d", &j);
    
    printf("\nS[%d ... %d]", i,j);
    for (int k = i; k <= j; k++) {
        putchar(s[k]); // equivalente a:printf("%c", s[k]);
    }
    printf("\n");
    
    //Q24
    char s[100];
    char c;
    int posicao;

    printf("String: ");
    fgets(s, sizeof(s), stdin);

    printf("Caractere: ");
    scanf(" %c", &c);

    printf("Posicao: ");
    scanf("%d", &posicao);

    //Processamento
    for (int k = posicao; s[k] != '\n' ; k++) {
        if (s[k] == c){
            printf("Indice: %d", k);
            break;
        }
    }
    
    //Q26
    char frase[100];

    printf("String: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcmp(frase, "\n")]='\0';

    int k = 0;
    for (int i = 0; frase[i] != '\n'; i++){
        frase[k] = frase[i] + 3;
        k++;
    }
    printf("Nova String: %s",frase);
    
    //Q27
    char frase[100];
    char frase2[100];

    printf("String: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")]='\0';

    // Converte tudo para minúsculo
    for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);
    }

    // Inverte a frase
    int tam = strlen(frase);
    for (int i = 0; i < tam; i++) {
        frase2[i] = frase[tam - 1 - i];
    }
    frase2[tam] = '\0';

    // Compara
    if (strcmp(frase, frase2) == 0) {
        printf("E um palindromo: %s\n", frase2);
    } else {
        printf("Nao e palindromo: %s\n", frase2);
    }
    */
    //Q31
    char s1[100] = "";
    char s2[100] = "";
    char c1, c2;
    int sair = 0;

    while (!sair) {
        int opcao;
        printf("\n--- MENU ---\n");
        printf("1 - Ler String S1\n");
        printf("2 - Tamanho de S1\n");
        printf("3 - Comparar S1 com S2\n");
        printf("4 - Concatenar S1 com S2\n");
        printf("5 - Imprimir S1 reversa\n");
        printf("6 - Contar ocorrencias de um caractere em S1\n");
        printf("7 - Substituir primeira ocorrencia de C1 por C2 em S1\n");
        printf("8 - Verificar se S2 e substring de S1\n");
        printf("9 - Retornar substring de S1\n");
        printf("10 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar o '\n' do buffer

        switch (opcao) {
            case 1:
                printf("Digite a string S1: ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0'; // remove \n
                break;

            case 2:
                printf("Tamanho de S1: %lu\n", strlen(s1));
                break;

            case 3:
                printf("Digite a string S2: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                if (strcmp(s1, s2) == 0)
                    printf("S1 e S2 são iguais\n");
                else
                    printf("S1 e S2 são diferentes\n");
                break;

            case 4:
                printf("Digite a string S2 para concatenar: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                strcat(s1, s2);
                printf("Resultado da concatenacao: %s\n", s1);
                break;

            case 5:
                printf("S1 reversa: ");
                for (int i = strlen(s1) - 1; i >= 0; i--)
                    putchar(s1[i]);
                printf("\n");
                break;

            case 6:
                printf("Digite o caractere para contar em S1: ");
                scanf("%c", &c1);
                getchar();
                int count = 0;
                for (int i = 0; s1[i] != '\0'; i++) {
                    if (s1[i] == c1)
                        count++;
                }
                printf("O caractere '%c' aparece %d vezes.\n", c1, count);
                break;

            case 7:
                printf("Digite o caractere a substituir (C1): ");
                scanf("%c", &c1);
                getchar();
                printf("Digite o novo caractere (C2): ");
                scanf("%c", &c2);
                getchar();
                for (int i = 0; s1[i] != '\0'; i++) {
                    if (s1[i] == c1) {
                        s1[i] = c2;
                        break;
                    }
                }
                printf("Nova string S1: %s\n", s1);
                break;

            case 8:
                printf("Digite a string S2: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';
                if (strstr(s1, s2))
                    printf("S2 e substring de S1.\n");
                else
                    printf("S2 nao e substring de S1.\n");
                break;

            case 9: {
                int inicio, tamanho;
                printf("Posicao inicial: ");
                scanf("%d", &inicio);
                printf("Tamanho da substring: ");
                scanf("%d", &tamanho);
                getchar();
                if (inicio < 0 || inicio + tamanho > strlen(s1)) {
                    printf("Parametros invalidos!\n");
                } else {
                    printf("Substring: ");
                    for (int i = inicio; i < inicio + tamanho; i++) {
                        putchar(s1[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 10:
                sair = 1;
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }
    return 0;
}