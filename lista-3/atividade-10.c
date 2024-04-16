#include <stdio.h>
#include <stdlib.h>

/*
10. Implemente um programa que chame a função média com o seguinte protótipo:
float media(int n, float *v)
*/

float media(int n, float *v)
{
    float media = 0;

    for(int i=0; i < n; i++){

        media += v[i]; 
    }
    media = media/n;

    return media;
}

int main()
{
    int n;

    printf("Digite o numero de notas: ");
    scanf("%d", &n);

    float v[n];
    for(int i = 0; i < n; i++)
    {
        printf("Digite V[%d]: ", i);
        scanf("%f", &v[i]);
    }

    printf("\nA sua media foi: %.1f", media(n, v));

    
    return 0;
}
