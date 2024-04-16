#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que realize a leitura da idade, da altura e do sexo de n pessoas. 
Ao final, mostre o número de mulheres com idade entre 20 e 35 anos e o 
número de homens com altura maior que 1,80m. Calcule e mostre também a variância da altura.
*/

#define MAX 100

struct informacoes{
    int idade;
    float altura;
    char sexo;
};



float media(int n, struct informacoes dados[]){

    float soma = 0;
    for(int i =0; i < n; i++){
        soma += dados[i].altura;
    }

    return soma / n;
}

float var(int n, float media, struct informacoes dados[]){

    float resu = 0;


    for(int i = 0; i < n; i++){
        float diferenca = dados[i].altura - media;
        resu += diferenca * diferenca;
    }

    return resu/n;
}


int main(){

    int n;
    int quanti_mulheres = 0;
    float quanti_homens = 0;
   

    struct informacoes dados[MAX];
    
    printf("Qual numero de pessoas? ");
    scanf("%d",&n);
    

    for(int i = 0; i < n; i++){
        printf("\nPessoal %d", i+1);

        printf("\nQual o seu Sexo[m/f]: ");
        scanf(" %c", &dados[i].sexo);
        
        printf("\nQual a sua altura: ");
        scanf("%f", & dados[i].altura);

        printf("\nQual a sua idade: ");
        scanf("%d", & dados[i].idade);
    }

    for(int i=0; i < n; i++)
    {
        char sexo = dados[i].sexo;
        int idade_mulher = dados[i].idade;

        float altura_homem = dados[i].altura;

        if(sexo == 'm' && idade_mulher >= 20 && idade_mulher <= 35){
            quanti_mulheres += 1;
        }
        if(altura_homem > 1.80 && sexo == 'f'){
            quanti_homens += 1;
        }
    }

    printf("\nNumero de mulheres entre 20 e 35 anos: %d", quanti_mulheres);
    printf("\nNumero de homens maiores que 1.80: %.1f",quanti_homens);

    float media_altura = media(n,dados);
    float resu = var(n,media_altura,dados);

    printf("\nVariância da altura: %.1f",resu);

    return 0;
}
