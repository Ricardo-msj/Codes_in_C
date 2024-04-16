#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
1. Implemente a função calcula_circulo, que calcula a área e a 
circunferência de um círculo de raio r. Essa função deve obedecer o protótipo: 
void calc_circulo(float r, float * circunferencia, float * area); 
Fórmulas: 
A = π r2 ; c = 2 π r ; π = 3.14159265 
Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência. 
*/
#define pi 3.14

void calc_circulo(float r, float *circunferencia, float *area);


int main(void)
{
    float r, circunferencia, area;

    printf("Digite r: ");
    scanf("%f",&r);

    calc_circulo(r,&circunferencia,&area);

    printf("area: %.1f, circunferencia: %.1f", area, circunferencia);

    return 0;
}

void calc_circulo(float r, float *ptcircunferencia, float *ptarea){

    *ptcircunferencia = (2 * pi) * r; 
    *ptarea = pi * (r * r);

}