#include <stdio.h>

int inverter(int num)
{
    int invertido = 0;

    while(num != 0)
    {
        invertido = invertido * 10 + num % 10;
        num /= 10;

    }

    return invertido;
}

int main()
{
    int num;

    printf("Digite: ");
    scanf("%d",&num);

    int inver = inverter(num);

    printf("\nO inverso de %d eh %d",num,inver);
    return 0;
}
