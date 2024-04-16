#include <stdio.h>
#include <stdlib.h>

/*
13. Fazer um programa para:
a. declarar variáveis a, b, c, d do tipo int.
b. declarar variáveis e, f, g, h do tipo float.
c. declarar vetor v de 10 elementos do tipo char.
d. declarar variável x do tipo int.
e. criar um ponteiro apontando para o endereço de a.
f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.
*/

#define MAX 10

int main()
{
    int a,b,c,d;
    float e,f,g,h;
    char v[MAX];

    int *ptr = &a;

    printf("primeiro elemento apontado %p\n",(void *)ptr);

    ptr++;

    printf("Endereco apos incrementar: %p\n",(void *)ptr);

    if((void *)ptr == (void *)&b) printf("O endereco do ponteiro: %p coincide com endereco de B que eh: %p\n",(void *)ptr, &b);
    else if((void *)ptr == (void *)&c) printf("O endereco do ponteiro: %p coincide com endereco de c que eh: %p\n",(void *)ptr, &c);
    else if((void *)ptr == (void *)&d) printf("O endereco do ponteiro: %p coincide com endereco de d que eh: %p\n",(void *)ptr, &d);
    else if((void *)ptr == (void *)&e) printf("O endereco do ponteiro: %p coincide com endereco de e que eh: %p\n",(void *)ptr, &e);
    else if((void *)ptr == (void *)&f) printf("O endereco do ponteiro: %p coincide com endereco de f que eh: %p\n",(void *)ptr, &f);
    else if((void *)ptr == (void *)&g) printf("O endereco do ponteiro: %p coincide com endereco de g que eh: %p\n",(void *)ptr, &g);
    else if((void *)ptr == (void *)&h) printf("O endereco do ponteiro: %p coincide com endereco de h que eh: %p\n",(void *)ptr, &h);

    else if((void *)ptr >= (void *)&v[0] && (void *)ptr <= (void *)&v[MAX-1]) printf("O endereco do ponteiro: %p coincide com endereco do vetor v que eh: %p\n",(void *)ptr, &v);
    else printf("Ele n coincide com nenhum outro endereco\n");
    return 0;
}
