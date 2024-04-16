#include <stdio.h>
#include <math.h>

/*. Implemente uma função que calcule as raízes de uma equação do segundo grau, do 
tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número, utilize 
a função sqrt. Consulte a documentação de como usá-la no programa*/


int main()
{
    int a,b,c;
    double raiz1, raiz2, delta;

    printf("\n\nDigite A: ");
    scanf("%d",&a);

    printf("Digite B: ");
    scanf("%d",&b);

    printf("Digite C: ");
    scanf("%d",&c);

    delta = sqrt((pow(b , 2) - 4 * a * c ));
    raiz1 = (-b + delta) / (2.0 * a);
    raiz2 = (-b - delta) / (2.0 * a);

    printf("\nRaiz1:( %.1lf )  Raiz2:( %.1lf )\n\n",raiz1,raiz2);

    return 0;
}
