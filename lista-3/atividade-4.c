#include <stdio.h>
#include <stdlib.h>


/*
4. Fazer uma função denominada divs() que:
a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
referência;
b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
max e min devem assumir os valores do menor e do maior divisores inteiros do número,
respectivamente, desconsiderando o número 1 e o próprio número num.*/

int divs(int n, int *max, int *min){
    
    int i;
    int count = 0;

    for(i=2; i <= n;i++){
        int resto = n % i;
        if(resto == 0){
            count++;
            if(i != n){
                if(i < *min) *min = i;
                if (i > *max) *max = i;
            }
        }
    }
    if(count == 2) return 0;
    else return 1;
}


int main(void)
{
    int n = 0;

    printf("Digite: ");
    scanf("%d", &n);

    int max = 0;
    int min = n;

    int num = divs(n, &max, &min);

    printf("%d, Valor maximo: %d, valor minimo: %d", num, max, min);
    
    return 0;
}


