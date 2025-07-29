#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

float quadrado(float n){
    n*= n;
    return n;
}
float dividir(float m,float n){
    //float div = m/n;
    return m/n;
}
float fahrenheit(float c){
    return c * (9.5/5.0) + 32.0;
}

float fCelcius(float f){
    return 5.0 * (f - 32.0)/9.0;
}
float celcius(float k){
    return k + 273.15;
}
float kelvin(float c){
    return c - 273.15;
}
float ms(float k){
    return k/3.6;
}
float km (float m){
    return m * 3.6;
}
int somaQuadrados(int i, int j, int k){
    i *= i;
    j *= j;
    k *= k;
    return i+j+k;
}
float media(float a, float b, float c, float d){
    return (a+b+c+d)/4;
}
float area(float r){
    return PI *(r*r);
}
int hipotenusa(int a, int b){
    // sqrt -> raiz quadrada
    // pow -> elevar
    return sqrt(pow(a,a)+pow(b,b));
}
int volume(int a, int r){
    return PI * pow(r,2) * a;
}
float desconto(float v){
    return v - (v * 0.12);
}
float salarioAumento(float s, float a){
    a /= 100.0; // converte de inteiro para decimal
    return s + (s*a);
}
float porcentagem (float p, float a){
    a /= 100.0;
    return  p * a;
}
float pagamento(float diaria, int dia){
    float salario = diaria * dia;
    return salario - (salario * 0.08);
}
int main(){
    /*
    //Q1
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d",&num);
    printf("%d",num);
    
    //Q2
    float num;
    printf("Digite um valor inteiro: ");
    scanf("%f",&num);
    printf("%f",num);
    
    //Q3
    int num, num2, num3 = 0;
    scanf("%d %d %d",&num, &num2, &num3);
    printf(" %d\n %d\n %d\n", num,num2,num3);
    
    //Q4
    float var;
    scanf("%f",&var);
    printf("%f",quadrado(var));
    
    //Q5
    float var, div = 0.0;
    printf("Digite um valor do didendo: ");
    scanf("%f", &var);
    printf("Informe o divisor: ");
    scanf("%f", &div);
    printf("%.1f", dividir(var,div));
    
    //Q6,Q7,Q8,Q9
    float cel;
    printf("Inf. graus Celcius: ");
    scanf("%f", &cel);
    printf("%.1f\n",fCelcius( fahrenheit(cel)));
    printf("%f\n",celcius(cel));
    printf("%f\n", kelvin(cel));
    
    //Q10,Q11
    float kilo,minSeg;
    printf("KM: ");
    scanf("%f",&kilo);
    printf("MS: ");
    scanf("%f",&minSeg);
    printf("MS: %.1f", ms(kilo));
    printf("km: %.1f", km(minSeg));
    
    //Q28
    int n,n2,n3;
    printf("Informe 3 valores inteiros: ");
    scanf("%d %d %d", &n, &n2, &n3);
    printf("Soma %d", somaQuadrados(n,n2,n3));
    
    //Q29
    float n1,n2,n3,n4;
    printf("Informe 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    printf("Media: %.2f", media(n1,n2,n3,n4));
    
    //Q34
    float raio;
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Area: %.2f", area(raio));
    
    //Q35
    int cateto1, cateto2;
    printf("Cateto Oposto: ");
    scanf("%d", &cateto1);
    printf("Cateto Adjacente: ");
    scanf("%d", &cateto2);
    printf("Hipotenusa: %d", hipotenusa(cateto1, cateto2));
    
    //Q36
    int alt, raio;
    printf("Altura: ");
    scanf("%d", &alt);
    printf("Raio: ");
    scanf("%d", &raio);
    printf("Volume: %d", volume(alt, raio));
    
    //Q37
    float valor;
    printf("Valor: ");
    scanf("%f", &valor);
    printf("Valor com Desconto: %.2f", desconto(valor));
    
    //Q38
    float salario, aumento;
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Aumento: ");
    scanf("%f", &aumento);
    printf("Salario com Aumento: %.2f", salarioAumento(salario, aumento));
    
    //Q39
    float premio = 780.000;
    printf("Primeiro ganhador: %.3f\n", porcentagem(premio,46));
    premio -=  porcentagem(premio,46);
    printf("Segundo ganhador: %.3f\n", porcentagem(premio,32));
    premio -= porcentagem(premio,32);
    printf("Terceiro ganhador: %.3f\n", premio);
    */
    //Q40
    float diaria;
    int dia;
    printf("Diaria: ");
    scanf("%f", &diaria);
    printf("Dias trabalhados: ");
    scanf("%d", &dia);
    printf("Pagamento: %.2f",  pagamento(diaria, dia));



}