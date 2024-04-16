#include <stdio.h>
#include <math.h>
#include <string.h>

/*7. Faça operações de arredondamento para cima e para baixo com números float. Dica: 
Pesquise o documento “Cartão de Referência da Linguagem C” para encontrar quais 
funções devem ser usadas no programa.*/

int main()
{
    float num;
    char resu[100];

    printf("\nVoce deseja arredondar para cima ou para Baixo?\n");
    printf("[up/bottom]: ");
    scanf("%s",resu);

    if(strcmp(resu, "up")==0) {
        printf("\nDigite seu numero: ");
        scanf("%f",&num);

        num = ceil(num);
        printf("\nValor arredondado: %.1f",num);
    }

    else if(strcmp(resu,"bottom")==0) {
        printf("\nDigite seu numero: ");
        scanf("%f",&num);

        num = floor(num);
        printf("\nValor arredondado: %.1f",num);
    }

    return 0;
}
