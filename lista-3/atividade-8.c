#include <stdio.h>
#include <stdlib.h>

/*
8. Qual é o resultado do seguinte programa?
#include <conio.h>
#include <stdio.h>
void main(){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i);
printf(" vet[%d] = %.1f",i, vet[i]);
printf(" *(f + %d) = %.1f",i, *(f+i));
printf(" &vet[%d] = %X",i, &vet[i]);
printf(" (f + %d) = %X",i, f+i);
}
}
*/

//A saida desse programa seria:
/*
i = 0vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61ff04 (f + 0) = 61ff04
i = 1vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61ff08 (f + 1) = 61ff08
i = 2vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61ff0c (f + 2) = 61ff0c
i = 3vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61ff10 (f + 3) = 61ff10
i = 4vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61ff14 (f + 4) = 61ff14
*/