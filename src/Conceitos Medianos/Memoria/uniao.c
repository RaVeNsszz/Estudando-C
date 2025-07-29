#include <stdio.h>
#include <stdlib.h>

union tipoU{
    short int x;
    unsigned char c;
};
struct tipoS{
    short int x;
    unsigned char c;
};
union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /*
    //DECLARAÇÃO
    union tipo u;
    //Cada campo (cada variável) da union pode ser acessado usando o operador de "." ponto
    u.x = 5;
    u.c = 'a';
    
    struct tipoS v;
    v.x = 5;
    v.c = 'a'; //97
    printf("x = %d\n",  v.x);
    printf("c = %d\n",  v.c);

    union tipoU u;
    u.x = 5;
    u.c = 'a'; //97
    printf("x = %d\n",  u.x);
    printf("c = %d\n",  u.c);
   
    union tipo v;
    v.x = 1545;
    printf("x = %d\n",v.x);
    v.c[0] = 'a';
    v.c[1] = 'b';
    printf("c[0] = %c\n",v.c[0]);
    printf("c[1] = %c\n",v.c[1]);
*/
    union tipo v;
    v.x = 1545;
    printf("x = %d\n",v.x);
    printf("c[0] = %d\n",v.c[0]);
    printf("c[1] = %d\n",v.c[1]);


}