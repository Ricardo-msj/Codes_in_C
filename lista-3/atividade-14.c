#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
14. Um cinema que possui capacidade de 100 lugares está quase sempre lotado. Certo dia cada
espectador respondeu a um questionário, onde constava:
- sua idade;
- sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
Elabore um programa que, recebendo estes dados calcule em funções e mostre:
a. a quantidade de respostas ótimo;
b. a diferença percentual entre respostas bom e regular;
c. a média de idade das pessoas que responderam ruim;
d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
ruim.
*/

#define MAX 100

struct informacoes
{
    int idade;
    char opniao[MAX];
};

int main()
{
    int indice = 0;

    struct informacoes dados[MAX];

    printf("Esse formulario tem capacidade para 100 pessoas\n");
    printf("Digite 'exit' para parar!!!!\n\n");

    do
    {
        char exit[20];

        printf("\nQual a sua idade: ");
        scanf("%d",&dados[indice].idade);

        printf("\nO que vc achou do filme? ele foi[otimo, bom, regular, ruim ou pessimo]: ");
        scanf("%s", dados[indice].opniao);

        indice++;

        printf("\nDeseja continuar[Y/exit]: ");
        scanf("%s", exit);

        if(strcmp(exit,"exit") == 0) break;

    } while (1);

    int resp_otimo = 0, otimo_maior_idade = 0;
    int dife_bom = 0, dife_regular = 0;
    int ruim_idade = 0, count_ruim = 0, ruim_maior_idade = 0;
    int count_pessimo = 0, pessimo_maior_idade = 0;


    for(int i = 0; i < indice; i++)
    {
        char *resposta = dados[i].opniao;
        if(strcmp(resposta,"otimo") == 0)
        {
            resp_otimo++;
            if(dados[i].idade > otimo_maior_idade) otimo_maior_idade = dados[i].idade;
        }
        if(strcmp(resposta,"bom") == 0) dife_bom++;
        if(strcmp(resposta,"regular") == 0) dife_regular++;
        if(strcmp(resposta,"ruim") == 0) 
        {
            ruim_idade += dados[i].idade; 
            count_ruim++;
            if(dados[i].idade > ruim_maior_idade) ruim_maior_idade = dados[i].idade;

        }
        if(strcmp(resposta,"pessimo") == 0)
        {
            count_pessimo++;
            if(dados[i].idade > pessimo_maior_idade) pessimo_maior_idade = dados[i].idade;
        }


    }
    printf("\nQuantidade de respostas otimo: %d\n", resp_otimo);

    double diferenca_percentual = ( (double)( dife_bom - dife_regular ) / dife_bom)*100;
    printf("diferença percentual entre respostas bom e regular: %.2f\n", diferenca_percentual);

    float media = (double)ruim_idade / count_ruim;
    printf("Média de idade das pessoas que responderam ruim: %.2f\n", media);

    double porcentagem_pessima = ((double)count_pessimo / indice)*100;
    printf("Porcentagem de respostas péssimo: %.2f\n", porcentagem_pessima);
    printf("Maior idade que utilizou esta opção: %d\n",pessimo_maior_idade);
    
    int maior = (otimo_maior_idade > ruim_maior_idade)?otimo_maior_idade:ruim_maior_idade;
    int menor = (otimo_maior_idade < ruim_maior_idade)?otimo_maior_idade:ruim_maior_idade;
    int diferenca_final = maior - menor;
    printf("Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d",diferenca_final);
    

    return 0;
}
