#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

/*
3. Qual é a saída deste programa supondo que i ocupa o endereço 4094 na memória?
main() {
int i=5, *p;
p = &i;
printf("%x %d %d \n", p, *p+2, 3**p);
}
*/



int main(void)
{
    int i = 5, *p;
    p = &i;

    *p = 4094;

    printf("%x %d %d\n", p, *p+2, 3**p);

    return 0;
}
